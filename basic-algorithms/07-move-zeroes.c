#include <stdio.h>

void moveZeroes(int* nums, int numsSize) {
    int position = 0;

    // Move all non-zero elements to the front
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[position] = nums[i];
            position++;
        }
    }

    // Fill the remaining positions with zero
    while (position < numsSize) {
        nums[position] = 0;
        position++;
    }
}

int main() {
    int nums[] = {0, 1, 0, 3, 12};
    int size = 5;

    moveZeroes(nums, size);

    for (int i = 0; i < size; i++) {
        printf("%d ", nums[i]);
    }

    return 0;
}
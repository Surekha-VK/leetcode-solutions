# Problem: Binary Search (Easy-Medium)

**Link:** https://leetcode.com/problems/binary-search/

## Approach

I used binary search because the input array is sorted. I maintain left
and right boundaries and repeatedly check the middle element. If the
middle element is smaller than the target, I search the right half;
otherwise, I search the left half.

## Complexity

- Time: O(log n)
- Space: O(1)

## Notes

The array must be sorted for binary search to work correctly. If the
target is not present, the function returns -1.
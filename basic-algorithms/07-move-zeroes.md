# Problem: Move Zeroes

**Link:** https://leetcode.com/problems/move-zeroes/

## Approach

I use a position variable to keep track of where the next non-zero
element should be placed.

I traverse the array and move every non-zero element toward the
beginning while maintaining its original order.

After all non-zero elements are placed, I fill the remaining positions
with zeroes.

## Complexity

- Time: O(n)
- Space: O(1)

## Notes

The solution modifies the array in-place and keeps the relative order
of non-zero elements unchanged.
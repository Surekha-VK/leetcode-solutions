# Problem: Two Sum (Easy)

**Link:** https://leetcode.com/problems/two-sum/

## Approach

I used a nested loop to check every possible pair of numbers in the
array. If the sum of two numbers equals the target, their indices are
returned.

## Complexity

- Time: O(n²)
- Space: O(1)

## Notes

The array can contain duplicate values. The solution returns the
indices of the two numbers whose sum equals the target.
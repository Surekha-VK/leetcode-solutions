# Problem: Reverse a String (Easy)

**Link:** https://leetcode.com/problems/reverse-string/

## Approach

I used two pointers, one starting from the beginning of the string and
the other starting from the end. I swap the characters at these
positions and move both pointers toward the center until the string is
reversed.

## Complexity

- Time: O(n)
- Space: O(1)

## Notes

A single-character string is already reversed, so no swapping is
required.
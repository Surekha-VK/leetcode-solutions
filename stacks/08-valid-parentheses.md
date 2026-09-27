# Problem: Valid Parentheses

**Link:** https://leetcode.com/problems/valid-parentheses/

## Approach

I used a stack to keep track of opening brackets.

Whenever an opening bracket `(`, `{`, or `[` is found, it is pushed
onto the stack.

Whenever a closing bracket is found, I check whether it matches the
most recently added opening bracket. If it does not match, the string
is invalid.

At the end, the stack must be empty for the parentheses to be valid.

## Complexity

- Time: O(n)
- Space: O(n)

## Notes

A stack is useful because the last opening bracket must be matched
first. This follows the Last In, First Out (LIFO) principle.
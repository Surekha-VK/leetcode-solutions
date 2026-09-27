# Problem: Longest Common Prefix (Easy)

**Link:** https://leetcode.com/problems/longest-common-prefix/

## Approach

I compare the characters of the first string with the characters at the
same position in all the other strings. If a character is different or
a string ends, the common prefix ends at that position.

## Complexity

- Time: O(n × m)
- Space: O(1)

## Notes

The solution finds the longest prefix that is common to every string.
If there is no common prefix, it returns an empty string.
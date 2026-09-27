# Problem: Valid Anagram (Easy)

**Link:** https://leetcode.com/problems/valid-anagram/

## Approach

I used an integer array of size 26 to store the frequency of each
lowercase letter. I increase the count for every character in the first
string and decrease it for every character in the second string. If all
counts become zero, the two strings are anagrams.

## Complexity

- Time: O(n)
- Space: O(1)

## Notes

The frequency of every character must be the same in both strings.
The solution assumes lowercase English letters.
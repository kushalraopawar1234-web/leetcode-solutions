## Problem: Valid Anagram (Easy)
**Link:** https://leetcode.com/problems/valid-anagram/

### Approach
Count each byte in the first string and subtract the matching byte from the second. Equal lengths and all-zero final counts prove the strings are anagrams.

### Complexity
- Time: O(n)
- Space: O(1) for the fixed 256-character table

### Notes
Casting to `unsigned char` keeps character values safe when used as array indices.
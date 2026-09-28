## Problem: Longest Common Prefix (Easy)
**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach
Start with the first word as the candidate prefix and shorten it until every later word matches it. This makes the stopping condition explicit.

### Complexity
- Time: O(S), where S is the total compared characters
- Space: O(1), excluding the output buffer

### Notes
If the first characters differ, the result is the empty string.
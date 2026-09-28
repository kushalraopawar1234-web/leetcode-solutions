## Problem: Valid Parentheses (Easy)
**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach
Push opening brackets onto a stack. Every closing bracket must match the most recently opened bracket, and the stack must be empty at the end.

### Complexity
- Time: O(n)
- Space: O(n)

### Notes
An empty string is valid, while a closing bracket without an opening bracket is not.
## Problem: Binary Search (Easy)
**Link:** https://leetcode.com/problems/binary-search/

### Approach
Repeatedly inspect the middle of the sorted array and discard the half that cannot contain the target. The loop also handles a missing target.

### Complexity
- Time: O(log n)
- Space: O(1)

### Notes
Computing the midpoint as `left + (right - left) / 2` avoids integer overflow.
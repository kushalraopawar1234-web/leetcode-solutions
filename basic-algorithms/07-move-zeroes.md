## Problem: Move Zeroes (Easy)
**Link:** https://leetcode.com/problems/move-zeroes/

### Approach
Copy non-zero values forward in their original order, then fill the remaining positions with zeroes. This modifies the array in place.

### Complexity
- Time: O(n)
- Space: O(1)

### Notes
The single-element zero case verifies that the write pointer does not move incorrectly.
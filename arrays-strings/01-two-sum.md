## Problem: Two Sum (Easy)
**Link:** https://leetcode.com/problems/two-sum/

### Approach
Check each pair of values and return the indices of the first pair whose sum equals the target. This direct approach is easy to verify locally and handles duplicates.

### Complexity
- Time: O(n^2)
- Space: O(1)

### Notes
The returned indices must be different, so the inner loop starts after the current outer index.
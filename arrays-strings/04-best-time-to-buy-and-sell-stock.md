## Problem: Best Time to Buy and Sell Stock (Easy)
**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach
Track the lowest price seen so far and the best profit achievable by selling today. A single left-to-right pass captures the required buy-before-sell ordering.

### Complexity
- Time: O(n)
- Space: O(1)

### Notes
A descending price list correctly returns zero because making no transaction is allowed.
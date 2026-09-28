#include <stdio.h>

int maxProfit(const int *prices, int size) {
    if (size == 0) return 0;
    int minimum = prices[0];
    int best = 0;
    for (int day = 1; day < size; day++) {
        if (prices[day] - minimum > best) best = prices[day] - minimum;
        if (prices[day] < minimum) minimum = prices[day];
    }
    return best;
}

int main(void) {
    int typical[] = {7, 1, 5, 3, 6, 4};
    int descending[] = {7, 6, 4, 3, 1};
    int pass = maxProfit(typical, 6) == 5 && maxProfit(descending, 5) == 0;
    printf("Best Time to Buy and Sell Stock: %s\n", pass ? "PASS" : "FAIL");
    return pass ? 0 : 1;
}
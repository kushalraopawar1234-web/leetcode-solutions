#include <stdio.h>

int binarySearch(const int *numbers, int size, int target) {
    int left = 0;
    int right = size - 1;
    while (left <= right) {
        int middle = left + (right - left) / 2;
        if (numbers[middle] == target) return middle;
        if (numbers[middle] < target) left = middle + 1;
        else right = middle - 1;
    }
    return -1;
}

int main(void) {
    int numbers[] = {-1, 0, 3, 5, 9, 12};
    int pass = binarySearch(numbers, 6, 9) == 4 && binarySearch(numbers, 6, 2) == -1;
    printf("Binary Search: %s\n", pass ? "PASS" : "FAIL");
    return pass ? 0 : 1;
}
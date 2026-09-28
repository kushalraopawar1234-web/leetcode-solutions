#include <stdio.h>

void moveZeroes(int *numbers, int size) {
    int nextNonZero = 0;
    for (int index = 0; index < size; index++) {
        if (numbers[index] != 0) numbers[nextNonZero++] = numbers[index];
    }
    while (nextNonZero < size) numbers[nextNonZero++] = 0;
}

int main(void) {
    int typical[] = {0, 1, 0, 3, 12};
    int expected[] = {1, 3, 12, 0, 0};
    int single[] = {0};
    moveZeroes(typical, 5);
    moveZeroes(single, 1);
    int pass = 1;
    for (int index = 0; index < 5; index++) pass = pass && typical[index] == expected[index];
    pass = pass && single[0] == 0;
    printf("Move Zeroes: %s\n", pass ? "PASS" : "FAIL");
    return pass ? 0 : 1;
}
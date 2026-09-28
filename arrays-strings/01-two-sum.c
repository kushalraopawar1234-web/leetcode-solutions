#include <stdio.h>

int *twoSum(int *numbers, int size, int target, int result[2]) {
    for (int first = 0; first < size; first++) {
        for (int second = first + 1; second < size; second++) {
            if (numbers[first] + numbers[second] == target) {
                result[0] = first;
                result[1] = second;
                return result;
            }
        }
    }
    return NULL;
}

int main(void) {
    int firstCase[] = {2, 7, 11, 15};
    int firstResult[2];
    int secondCase[] = {3, 3};
    int secondResult[2];
    int firstPass = twoSum(firstCase, 4, 9, firstResult) && firstResult[0] == 0 && firstResult[1] == 1;
    int secondPass = twoSum(secondCase, 2, 6, secondResult) && secondResult[0] == 0 && secondResult[1] == 1;
    printf("Two Sum: %s\n", firstPass && secondPass ? "PASS" : "FAIL");
    return firstPass && secondPass ? 0 : 1;
}
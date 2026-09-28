#include <stdio.h>
#include <string.h>

int isAnagram(const char *first, const char *second) {
    int counts[256] = {0};
    if (strlen(first) != strlen(second)) return 0;
    for (int index = 0; first[index] != '\0'; index++) {
        counts[(unsigned char)first[index]]++;
        counts[(unsigned char)second[index]]--;
    }
    for (int index = 0; index < 256; index++) if (counts[index] != 0) return 0;
    return 1;
}

int main(void) {
    int pass = isAnagram("anagram", "nagaram") && !isAnagram("rat", "car");
    printf("Valid Anagram: %s\n", pass ? "PASS" : "FAIL");
    return pass ? 0 : 1;
}
#include <stdio.h>
#include <string.h>

void longestCommonPrefix(char **words, int count, char *result) {
    int prefixLength = count == 0 ? 0 : (int)strlen(words[0]);
    for (int word = 1; word < count; word++) {
        int index = 0;
        while (index < prefixLength && words[0][index] == words[word][index]) index++;
        prefixLength = index;
    }
    memcpy(result, words[0], (size_t)prefixLength);
    result[prefixLength] = '\0';
}

int main(void) {
    char *typical[] = {"flower", "flow", "flight"};
    char result[32];
    char *edge[] = {"dog", "racecar", "car"};
    char edgeResult[32];
    longestCommonPrefix(typical, 3, result);
    longestCommonPrefix(edge, 3, edgeResult);
    int pass = strcmp(result, "fl") == 0 && strcmp(edgeResult, "") == 0;
    printf("Longest Common Prefix: %s\n", pass ? "PASS" : "FAIL");
    return pass ? 0 : 1;
}
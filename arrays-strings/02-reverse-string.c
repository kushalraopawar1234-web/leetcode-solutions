#include <stdio.h>
#include <string.h>

void reverseString(char *text, int length) {
    for (int left = 0, right = length - 1; left < right; left++, right--) {
        char temporary = text[left];
        text[left] = text[right];
        text[right] = temporary;
    }
}

int main(void) {
    char typical[] = "hello";
    char edge[] = "";
    reverseString(typical, (int)strlen(typical));
    reverseString(edge, (int)strlen(edge));
    int pass = strcmp(typical, "olleh") == 0 && strcmp(edge, "") == 0;
    printf("Reverse a String: %s\n", pass ? "PASS" : "FAIL");
    return pass ? 0 : 1;
}
#include <stdio.h>
#include <string.h>

int isValid(const char *text) {
    char stack[10000];
    int top = 0;
    for (int index = 0; text[index] != '\0'; index++) {
        char current = text[index];
        if (current == '(' || current == '[' || current == '{') stack[top++] = current;
        else {
            if (top == 0) return 0;
            char opening = stack[--top];
            if ((current == ')' && opening != '(') || (current == ']' && opening != '[') || (current == '}' && opening != '{')) return 0;
        }
    }
    return top == 0;
}

int main(void) {
    int pass = isValid("()[]{}") && isValid("") && !isValid("([)]") && !isValid("(");
    printf("Valid Parentheses: %s\n", pass ? "PASS" : "FAIL");
    return pass ? 0 : 1;
}
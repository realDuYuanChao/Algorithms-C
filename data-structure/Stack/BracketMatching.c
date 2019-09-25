#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "SqStack.h"

#define MAX_SIZE 100

bool isMatching(char brackets[]);

int main() {

    printf("Enter brackets:");
    char brackets[MAX_SIZE];
    gets(brackets);

    isMatching(brackets)
    ? printf("brackets is matching!\n") : printf("brackets isn't matching!\n");
    return 0;
}

bool isMatching(char brackets[]) {
    SqStack stack;
    initStack(&stack);

    for (int i = 0, size = (int) strlen(brackets); i < size; ++i) {
        switch (brackets[i]) {
            case '{':
            case '[':
            case '(':
            case '<':
                push(&stack, brackets[i]);
                break;
            case '}':
                if (!isEmpty(stack) && pop(&stack) == '{') {
                    break;
                } else {
                    return false;
                }
            case ']':
                if (!isEmpty(stack) && pop(&stack) == '[') {
                    break;
                } else {
                    return false;
                }
            case ')':
                if (!isEmpty(stack) && pop(&stack) == '(') {
                    break;
                } else {
                    return false;
                }
            case '>':
                if (!isEmpty(stack) && pop(&stack) == '<') {
                    break;
                } else {
                    return false;
                }
        }
    }
    return isEmpty(stack);
}
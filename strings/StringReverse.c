#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

void reverse(char *pStr);

int main() {

    printf("Enter a string:");
    char *pStr = (char *) malloc(sizeof(char) * MAX_SIZE);
    gets(pStr);


    printf("Original:%s\n", pStr);
    reverse(pStr);
    printf("After reversing:%s\n", pStr);
    return 0;
}

void reverse(char *pStr) {
    int length = strlen(pStr);
    for (int i = 0; i < length / 2; ++i) {
        char temp = *(pStr + i);
        *(pStr + i) = *(pStr + length - i - 1);
        *(pStr + length - i - 1) = temp;
    }
}


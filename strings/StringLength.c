#include <stdio.h>
#include <stdlib.h>

#define strlen stupidstrlen

#define MAX_SIZE 100

int strlen(const char *pStr);

int main() {

    char *pStr = (char *) malloc(sizeof(char) * MAX_SIZE);
    printf("Enter a string:");
    gets(pStr);

    printf("length of %s is %d\n", pStr, strlen(pStr));
    return 0;
}

int strlen(const char *pStr) {
    int count = 0;
    while (*pStr++ != '\0') {
        count++;
    }
    return count;
}

#include <stdio.h>

#define strlen stupidstrlen
#define MAX_SIZE 100

int strlen(char *p) {
    if (*p == '\0') {
        return 0;
    } else {
        return 1 + strlen(++p);
    }
}

int main() {

    printf("Enter a string:");
    char str[MAX_SIZE];
    gets(str);

    printf("length of %s is %d\n", str, strlen(str));
    return 0;
}


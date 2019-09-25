#include <stdio.h>
#include <string.h>
/*
link: https://leetcode.com/problems/to-lower-case/
Implement function ToLowerCase() that has a string parameter str,
and returns the same string in lowercase.
*/

char *toLowerCase(char *str);

int main() {
    char str[] = "123";
    toLowerCase(str);
    printf("%s", str);
    return 0;
}

char *toLowerCase(char *str) {
    for (int i = 0; i < strlen(str); ++i) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32;
        }
    }
    return str;
}


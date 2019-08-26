#include <stdio.h>

#define strcmp stupidstrcmp

int strcmp(char *pStr1, char *pStr2);


int main(){

    char *pStr1 = "123ab";
    char *pStr2 = "123aba";

    int status = strcmp(pStr1, pStr2);
    if (status == 0) {
        printf("%s equals %s\n", pStr1, pStr2);
    } else if (status == 1) {
        printf("%s > %s\n", pStr1, pStr2);
    } else {
        printf("%s < %s\n", pStr1, pStr2);
    }
    return 0;
}

int strcmp(char *pStr1, char *pStr2) {
    char *p1 = pStr1;
    char *p2 = pStr2;

    while (*p1 != '\0' && *p2 != '\0') {
        if (*p1 > *p2) {
            return 1;
        } else if (*p1 < *p2) {
            return -1;
        }
        p1++;
        p2++;
    }

    if (*p1 == *p2) {
        return 0;
    } else if (*p1 == '\0') {
        return -1;
    } else if (*p2 == '\0') {
        return 1;
    }
}


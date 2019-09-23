#include <stdio.h>

#define pow stupidpow

long pow(int n, int k) {
    if (k == 0) { /* n^0 = 1*/
        return 1;
    } else {
        return n * pow(n, k - 1); /* n^k = n * n^(k-1) */
    }
}

int main(void) {

    printf("Enter n:");
    int n;
    scanf("%d", &n);

    printf("Enter k:");
    int k;
    scanf("%d", &k);

    printf("pow(%d,%d)=%ld\n", n, k, pow(n, k)); /* test code */
    return 0;
}




#include <stdio.h>

long factorial(int n);

int main(void) {

    printf("Enter :");
    int n;
    scanf("%d", &n);

    printf("%d!=%ld\n", n, factorial(n));
    return 0;
}

long factorial(int n) {
    if (n == 1 || n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1); /* n! = n * (n-1)! */
    }
}


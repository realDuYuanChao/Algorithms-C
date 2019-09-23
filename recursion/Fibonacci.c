#include <stdio.h>

int fib(int n);

int main(void) {

    /* print top 10 of Fibonacci.*/
    for (int i = 1; i <= 10; ++i) {
        printf("%d\t", fib(i));
    }
    printf("\n");

    return 0;
}

int fib(int n) {
    if (n == 1 || n == 2) {
        return 1;
    } else {
        return fib(n - 1) + fib(n - 2);
    }
}


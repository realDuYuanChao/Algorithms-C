#include <stdio.h>

long factorial(int n);


int main() {

    int n = 5;
    printf("%d! = %ld\n", n, factorial(n));
    return 0;
}

long factorial(int n) {
    long fac = 1;
    for (int i = 1; i <= n; ++i) {
        fac *= i;
    }
    return fac;
}

#include <stdio.h>

int max(int a, int b);


int main() {

    int a = 0;
    int b = -1;
    printf("between %d and %d max is %d\n", a, b, max(a, b));
    return 0;
}

int max(int a, int b) {
    return (a >= b) ? a : b;
}


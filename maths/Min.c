#include <stdio.h>

int min(int a, int b);


int main() {

    int a = 0;
    int b = -1;
    printf("between %d and %d min is %d\n", a, b, min(a, b));
    return 0;
}

int min(int a, int b) {
    return (a <= b) ? a : b;
}


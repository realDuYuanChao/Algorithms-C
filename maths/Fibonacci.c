#include <stdio.h>

void fibonacci(int n);

int main() {


    fibonacci(20);
    return 0;
}

void fibonacci(int n) {
    //0 1 1 2 3 5 8 13 21
    int a = 0;
    int b = 1;
    for (int i = 1; i <= 20; ++i) {
        int c = a + b;
        printf("%d\t", a);
        a = b;
        b = c;
        if (i % 5 == 0) {
            printf("\n");
        }
    }
}
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isPerfectNumber(int n);

int main(void) {

    printf("Enter :");
    int n;
    scanf("%d", &n);

    if (isPerfectNumber(n)) {
        printf("%d is perfect number.\n", n);
    } else {
        printf("%d is not perfect number.\n", n);
    }
}

bool isPerfectNumber(int n) {
    int sumFactor = 0;

    for (int i = 1; i < n; ++i) {
        if (n % i == 0) {
            sumFactor += i;
        }
    }
    return sumFactor == n;
}




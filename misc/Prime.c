#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isPrime(int number);

int main(void) {

    int number;
    printf("Enter a number:");
    scanf("%d", &number);

    if (isPrime(number)) {
        printf("%d is prime number.\n", number);
    } else {
        printf("%d is not prime number.\n", number);
    }
    return 0;
}

bool isPrime(int number) {
    for (int i = 2; i < sqrt(number); ++i) {
        if (number % i == 0) { /* not prime number. */
            return false;
        }
    }
    return true; /* is prime number. */
}


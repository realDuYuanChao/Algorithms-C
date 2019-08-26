#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int n);


int main(void) {
    printf("Enter :");
    int n;
    scanf("%d", &n);

    if (isPalindrome(n)) {
        printf("%d is palindrome number.\n", n);
    } else {
        printf("%d is not palindrome number.\n", n);
    }
    return 0;
}


bool isPalindrome(int n) {
    int originNumber = n;

    int newNumber = 0;

    while (n != 0) {
        newNumber = newNumber * 10 + n % 10;
        n /= 10;
    }
    if (newNumber == originNumber) {
        return true;
    } else {
        return false;
    }
}

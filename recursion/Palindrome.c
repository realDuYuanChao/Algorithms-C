#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char *p, int low, int high);

#define MAX_SIZE 100

int main(void) {

    printf("Enter a string:");
    char str[MAX_SIZE];
    gets(str);

    isPalindrome(str, 0, (int) (strlen(str) - 1))
    ? printf("is palindrome string\n") : printf("is not palindrome\n");

    return 0;
}


bool isPalindrome(char *p, int low, int high) {
    if (low >= high) {
        return true;
    } else if (*(p + low) == *(p + high)) {
        return isPalindrome(p, low + 1, high - 1);
    } else {
        return false;
    }
}

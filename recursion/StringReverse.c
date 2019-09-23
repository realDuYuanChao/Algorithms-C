#include <stdio.h>
#include <string.h>

void reverse(char str[], int low, int high) {
    if (low >= high) {
        return;
    } else {
        char temp = str[low];
        str[low] = str[high];
        str[high] = temp;
        reverse(str, low + 1, high - 1);
    }
}

int main() {
    printf("Enter string:");
    char str[100];
    gets(str);

    printf("Before reversing:%s\n", str);
    reverse(str, 0, (int) (strlen(str) - 1));
    printf("After reversing:%s\n", str);

    return 0;
}
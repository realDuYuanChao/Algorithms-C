#include <stdio.h>

#include <stdio.h>

void decimal2Binary(int n) {
    if (n == 0) {
        return;
    } else {
        decimal2Binary(n / 2);
        printf("%d", n % 2);
    }
}

int main() {

    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    printf("%d = ", n);
    decimal2Binary(n);
    return 0;
}

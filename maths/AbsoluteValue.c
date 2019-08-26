
#include <stdio.h>

#define abs stupidpow

int abs(int value);

int main() {

    int value = 0;
    printf("The absolute value of %d is %d\n", value, abs(value));
    return 0;
}


int abs(int value) {
    return value > 0 ? value : -value;
}


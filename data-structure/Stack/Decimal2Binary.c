#include <stdio.h>
#include "SqStack.h"

/**
 * Convert decimal to binary using stack
 */
int main(){

    printf("Enter a decimal number:");
    int num;
    scanf("%d", &num);

    SqStack stack;
    initStack(&stack);

    while (num != 0) {
        int remainder = num % 2;
        push(&stack, remainder);
        num >>= 1;
    }

    printf("Binary:");
    while (!isEmpty(stack)) {
        printf("%d", pop(&stack));
    }
    printf("\n");
    return 0;
}


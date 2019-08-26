#include "SqStack.h"
#include <stdio.h>

bool initStack(SqStack *pstack) {
    pstack->base = (ElemType *) malloc(sizeof(ElemType) * INIT_STACK_SIZE);
    if (!pstack->base) {
        exit(OVERFLOW);
    }
    pstack->top = pstack->base;
    pstack->capacity = INIT_STACK_SIZE;
    return true;
}

bool isEmpty(SqStack stack) {
    return stack.base == stack.top;
}

bool push(SqStack *pstack, ElemType elem) {
    if (isFull(*pstack)) {
        grow(pstack);
    }
    pstack->top++;
    *pstack->top = elem;
    return true;
}

ElemType pop(SqStack *pstack) {
    ElemType elem = *(pstack->top);
    pstack->top--;
    return elem;
}

ElemType peek(SqStack stack) {
    return *stack.top;
}

int size(SqStack stack) {
    return (int) (stack.top - stack.base);
}

int capacity(SqStack stack) {
    return stack.capacity;
}

void grow(SqStack *pstack) {
    ElemType *newBase = (ElemType *) realloc(pstack->base,
                                             sizeof(ElemType *) * (pstack->capacity + STACK_INCREMENT));
    if (!newBase) exit(OVERFLOW);
    pstack->base = newBase;
    pstack->top = pstack->base + (pstack->top - pstack->base);
    pstack->capacity = pstack->capacity + STACK_INCREMENT;
}

bool isFull(SqStack stack) {
    return stack.top - stack.base == stack.capacity;
}

bool clear(SqStack *pstack) {
    pstack->top = pstack->base;
}


bool destroy(SqStack *pstack){
    free(pstack->base);
    pstack->base = pstack->top = NULL;
    pstack->capacity = 0;
}

bool notInit(SqStack stack){
    return stack.base == NULL;
}



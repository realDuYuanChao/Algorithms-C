#include <stdbool.h>
#include <stdlib.h>

#define INIT_STACK_SIZE 20
#define STACK_INCREMENT 10
#define OVERFLOW -2

typedef int ElemType;
typedef struct {
    ElemType *base;
    ElemType *top;
    int capacity;
} SqStack;

bool initStack(SqStack *pstack);

bool isEmpty(SqStack stack);

bool push(SqStack *pstack, ElemType elem);

ElemType pop(SqStack *pstack);

ElemType peek(SqStack stack);

int size(SqStack stack);

int capacity(SqStack stack);

void grow(SqStack *pstack);

bool isFull(SqStack stack);

bool clear(SqStack *pstack);

bool destroy(SqStack *pstack);

bool notInit(SqStack stack);
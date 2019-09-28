#include <stdbool.h>
#include <stdlib.h>

#define QUEUE_INCREMENT 10
#define OVERFLOW -2
#define QUEUE_IS_EMPTY -3
#define QUEUE_IS_FULL -4

typedef int ElemType;
#define MAX_SIZE 10
typedef struct {
    ElemType *base;
    int rear;
    int front;
    int size;
    int capacity;
} Queue;

void init(Queue *pQueue);

bool isEmpty(Queue queue);

bool isFull(Queue queue);

int size(Queue queue);

int capacity(Queue queue);

ElemType deQueue(Queue *pQueue);

bool enQueue(Queue *pQueue, ElemType elem);

ElemType peekFront(Queue queue);

ElemType peekEnd(Queue queue);

void destroy(Queue *pQueue);

void clear(Queue *pQueue);
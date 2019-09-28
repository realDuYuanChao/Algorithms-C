#include <stdio.h>
#include "CircleQueue.h"

void init(Queue *pQueue) {
    ElemType *newBase = (ElemType *) malloc(sizeof(ElemType) * MAX_SIZE);
    if (!newBase) {
        exit(OVERFLOW);
    }
    pQueue->base = newBase;
    pQueue->capacity = MAX_SIZE;
    pQueue->front = pQueue->rear = 0;
    pQueue->size = 0;
}


bool isEmpty(Queue queue) {
    return queue.front == queue.rear;
}

bool isFull(Queue queue) {
    return (queue.rear + 1) % MAX_SIZE == queue.front;
}

int size(Queue queue) {
    return queue.size;
}

ElemType peekFront(Queue queue) {
    return queue.base[queue.front];
}

ElemType peekEnd(Queue queue) {
    return queue.base[(queue.rear - 1 + MAX_SIZE) % MAX_SIZE];
}

int capacity(Queue queue) {
    return queue.capacity;
}

ElemType deQueue(Queue *pQueue) {
    if (isEmpty(*pQueue)) {
        exit(QUEUE_IS_EMPTY);
    }
    ElemType deQueueElem = pQueue->base[pQueue->front];
    pQueue->front = (pQueue->front + 1) % MAX_SIZE;

    pQueue->size--;
    return deQueueElem;
}

bool enQueue(Queue *pQueue, ElemType elem) {
    if (isFull(*pQueue)) {
        return false;
    }
    pQueue->base[pQueue->rear] = elem;
    pQueue->rear = (pQueue->rear + 1) % MAX_SIZE;
    pQueue->size++;
    return true;
}

void destroy(Queue *pQueue) {
    //TODO
}

void clear(Queue *pQueue) {
    //TODO
}
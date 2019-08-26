#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "ArrayList.h"

bool init(ArrayList *plist) {
    plist->base = (ElemType *) malloc(sizeof(ElemType));
    if (!plist->base) {
        exit(OVERFLOW);
    }

    plist->length = 0;
    plist->capacity = LIST_INIT_SIZE;

    return true;
}

bool insert(ArrayList *plist, int index, const ElemType *elem) {
    if (index < 0 || index > plist->length) {
        perror("index out of exception.\n");
        exit(INVALID_INDEX);
    }

    if (isFull(*plist)) {
        ElemType *newBase = (ElemType *) realloc(plist->base, (plist->capacity + INCREMENT) * sizeof(ElemType));
        if (!newBase) {
            exit(OVERFLOW);
        }
        plist->base = newBase;
        plist->capacity += INCREMENT;
    }

    for (int i = plist->length - 1; i >= index; i--) {
        plist->base[i + 1] = plist->base[i];
    }
    plist->base[index] = *elem;
    plist->length++;
    return true;
}

bool delete(ArrayList *plist, int index, ElemType *elem) {
    if (index < 0 || index > plist->length - 1) {
        perror("index out of exception.\n");
        exit(INVALID_INDEX);
    }
    for (int i = index; i < plist->length - 1; ++i) {
        plist->base[i] = plist->base[i + 1];
    }
    plist->length--;
    return true;
}

int length(ArrayList list) {
    return list.length;
}

bool isEmpty(ArrayList list) {
    return list.length == 0;
}

bool isFull(ArrayList list) {
    return list.length == list.capacity;
}

bool merge(ArrayList listA, ArrayList listB, ArrayList *plistC) {
    int pa = 0;
    int pb = 0;
    int pc = 0;

    while (pa < listA.length && pb < listB.length) {
        if (listA.base[pa] <= listB.base[pb]) {
            plistC->base[pc++] = listA.base[pa++];
        } else {
            plistC->base[pc++] = listB.base[pb++];
        }
        plistC->length++;
    }

    while (pa < listA.length) {
        plistC->base[pc++] = listA.base[pa++];
        plistC->length++;
    }
    while (pb < listB.length) {
        plistC->base[pc++] = listB.base[pb++];
        plistC->length++;
    }

    return true;
}

void destory(ArrayList *plist) {
    if (plist) {
        free(plist->base);
        plist->length = 0;
        plist->capacity = 0;
    }
}

void clear(ArrayList *plist) {
    if (!plist) {
        return;
    }
    plist->length = 0;
}

bool contains(ArrayList list, ElemType elem) {
    for (int i = 0; i < list.length; ++i) {
        if (list.base[i] == elem) {
            return true;
        }
    }
    return false;
}

ElemType peek(ArrayList list) {
    return *list.base;
}

ElemType get(ArrayList list, int index){
    if (index < 0 || index > list.length - 1) {
        perror("index out of exception\n");
        exit(INVALID_INDEX);
    }
    return list.base[index];
}
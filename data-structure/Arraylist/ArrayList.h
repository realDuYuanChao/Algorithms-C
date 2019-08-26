#include <stdbool.h>

#define LIST_INIT_SIZE 10

#define INCREMENT 10

#define OVERFLOW -2
#define INVALID_INDEX -3

typedef int ElemType;

typedef struct {
    ElemType *base;
    int length; /* current capacity */
    int capacity; /* the capacity of allocating */
} ArrayList;

bool init(ArrayList *plist);

bool insert(ArrayList *plist, int index, const ElemType *elem);

int length(ArrayList list);

bool isEmpty(ArrayList list);

bool isFull(ArrayList list);

bool merge(ArrayList listA, ArrayList listB, ArrayList *plistC);

void destory(ArrayList *plist);

void clear(ArrayList *plist);

bool contains(ArrayList list, ElemType elem);

ElemType peek(ArrayList list);

ElemType get(ArrayList list, int index);
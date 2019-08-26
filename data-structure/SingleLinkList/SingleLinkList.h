#include <stdbool.h>

typedef int ElemType;
typedef struct Node {
    union {
        ElemType data; /* store node data */
        int length; /* store list length */
    };
    struct Node *next;
} Node, *LinkList;

void initLinkList(LinkList *linkList);

bool isEmpty(LinkList linkList);

bool insertAt(LinkList linkList, int index, ElemType elem);

void travel(LinkList linkList);

int length(LinkList linkList);

bool insertFront(LinkList linkList, ElemType elem);

bool insertEnd(LinkList linkList, ElemType elem);

void destory(LinkList linkList);

void clear(LinkList linkList);

bool checkNotNull(LinkList linkList);

bool checkIsNull(LinkList linkList);


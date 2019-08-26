#include <stdio.h>
#include "SingleLinkList.h"
#include <stdlib.h>

void initLinkList(LinkList *linkList) {
    (*linkList) = malloc(sizeof(LinkList));
    (*linkList)->length = 0;
    (*linkList)->next = NULL;
}

bool isEmpty(LinkList linkList) {
    return linkList->length == 0;
}

bool insertAt(LinkList linkList, int index, ElemType elem) {
    if (checkIsNull(linkList) || index < 0 || index > linkList->length) {
        return false;
    }
    int j = 0;
    LinkList p = linkList;
    while (p && j < index) {
        p = p->next;
        ++j;
    }

    Node *newNode = (Node *) malloc(sizeof(Node *)); /* allocate new node */
    newNode->data = elem; /* init new node data */

    newNode->next = p->next;
    p->next = newNode;
    linkList->length++;
    return true;
}

bool insertFront(LinkList linkList, ElemType elem) {
    return insertAt(linkList, 0, elem);
}

bool insertEnd(LinkList linkList, ElemType elem) {
    return insertAt(linkList, linkList->length, elem);
}

void travel(LinkList linkList) {
    LinkList p = linkList->next;
    for (int i = 0; i < linkList->length; ++i) {
        printf("%d\t", p->data);
        p = p->next;
    }
    printf("\n");
}

int length(LinkList linkList) {
    return linkList->length;
}

void destory(LinkList linkList) {
    if (checkIsNull(linkList))
        return;

    Node *next = NULL;
    do {
        next = linkList->next;
        free(linkList);
        linkList = next;
    } while (linkList);
}

void clear(LinkList linkList) {
    if (checkIsNull(linkList))
        return;

    Node *cur = linkList->next;
    Node *next = NULL;

    do {
        next = cur->next;
        free(cur);
        cur = next;
    } while (next);
}

bool checkNotNull(LinkList linkList) {
    return linkList != NULL;
}

bool checkIsNull(LinkList linkList) {
    return linkList == NULL;
}
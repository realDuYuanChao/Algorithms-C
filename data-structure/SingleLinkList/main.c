#include "SingleLinkList.h"
#include <stdio.h>

/* Driver code */
int main(void) {

    LinkList linkList;
    initLinkList(&linkList);

    insertAt(linkList, 0, 1); /* 1->NULL */
    insertAt(linkList, 1, 2); /* 1->2->NULL */
    insertFront(linkList, -1); /* -1->1->2->NULL */
    insertEnd(linkList, 3); /* -1->1->2->3->NULL */

    travel(linkList);
    clear(linkList);
    destory(linkList);
    return 0;
}


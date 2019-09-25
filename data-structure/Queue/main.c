#include <stdio.h>
#include "CircleQueue.h"

int main() {
    Queue queue;
    init(&queue);

    enQueue(&queue, 1); //1
    enQueue(&queue, 2); //1->2
    enQueue(&queue, 3); //1->2->3
    enQueue(&queue, 4); //1->2->3->4

    while (!isEmpty(queue)) {
        printf("%d\n", deQueue(&queue));
    }
    return 0;
}


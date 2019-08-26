#include <stdio.h>
#include "ArrayList.h"

int main(){
    ArrayList arrayList;
    init(&arrayList);

    for (int i = 0; i < 1000; ++i) {
        insert(&arrayList, 0, &i);
    }
    return 0;
}


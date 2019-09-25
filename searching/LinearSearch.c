#include <stdio.h>

int search(const int *arr, int len, int key);

int main() {
    int arr[] = {-1, 3, 5, 8, 9, 10, 20, 27, 30, 99};

    int len = sizeof(arr) / sizeof(arr[0]); /* calculate array length */

    printf("Enter key:");
    int key;
    scanf("%d", &key);

    int index = search(arr, len, key);
    index != -1 ? printf("found at position:%d\n", index) : printf("not found\n");
    return 0;
}

int search(const int *arr, int len, int key) {
    for (int i = 0; i < len; ++i) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1; //not found
}

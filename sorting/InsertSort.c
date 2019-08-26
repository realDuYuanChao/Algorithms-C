#include <stdio.h>

void insertSort(int *arr, int len);

void travelArray(int *arr, int len);

int main() {
    int arr[] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};
    int len = sizeof(arr) / sizeof(arr[0]); /* calculate array length */

    printf("Before sorting\n");
    travelArray(arr, len);

    insertSort(arr, len);
    printf("After sorting\n");
    travelArray(arr, len);
    return 0;
}

void insertSort(int *arr, int len) {
    for (int i = 1; i < len; ++i) {
        int insertVal = arr[i];
        int j = i - 1;
        while (j >= 0 && insertVal < arr[j]) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = insertVal;
    }
}

void travelArray(int *arr, int len) {
    for (int i = 0; i < len; ++i) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}
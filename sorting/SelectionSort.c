#include <stdio.h>

void travelArray(int *arr, int len);

void selectionSort(int *arr, int len);

int main() {
    int arr[] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};
    int len = sizeof(arr) / sizeof(arr[0]); /* calculate array length */

    printf("Before sorting\n");
    travelArray(arr, len);

    selectionSort(arr, len); /* call function to sort */
    printf("After sorting\n");
    travelArray(arr, len);
    return 0;
}

void swap(int *arr, int index1, int index2) {
    int temp = arr[index1];
    arr[index1] = arr[index2];
    arr[index2] = temp;
}

void selectionSort(int *arr, int len) {
    for (int i = 0; i < len - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < len; ++j) {
            if (arr[minIndex] > arr[j]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(arr, minIndex, i);
        }
    }
}

void travelArray(int *arr, int len) {
    for (int i = 0; i < len; ++i) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}
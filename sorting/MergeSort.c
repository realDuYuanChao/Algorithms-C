#include <stdio.h>

void travelArray(int *arr, int len);

void mergeSort(int *arr, int low, int high);

void merge(int *arr, int low, int mid, int high);

#define MAX_SIZE 100
int tempArray[MAX_SIZE];

int main() {
    int arr[] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};
    int len = sizeof(arr) / sizeof(arr[0]); /* calculate array length */

    printf("Before sorting\n");
    travelArray(arr, len);

    mergeSort(arr, 0, len - 1); /* call function to sort */
    printf("After sorting\n");
    travelArray(arr, len);
    return 0;
}

void merge(int *arr, int low, int mid, int high) {
    int i = low;
    int index1 = low;
    int index2 = mid + 1;
    while (index1 <= mid && index2 <= high) {
        if (arr[index1] <= arr[index2]) {
            tempArray[i++] = arr[index1++];
        } else {
            tempArray[i++] = arr[index2++];
        }
    }

    while (index1 <= mid) {
        tempArray[i++] = arr[index1++];
    }
    while (index2 <= high) {
        tempArray[i++] = arr[index2++];
    }
    for (int i = low; i <= high; ++i) {
        arr[i] = tempArray[i];
    }
}

void mergeSort(int *arr, int low, int high) {
    if (low >= high) {
        return;
    }
    int mid = low + (high - low) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

void travelArray(int *arr, int len) {
    for (int i = 0; i < len; ++i) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}


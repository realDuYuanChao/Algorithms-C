#include <stdio.h>
#include <stdbool.h>

void printArray(int *arr, int len);

void quickSort(int *arr, int low, int high);

void swap(int *pa, int *pb);

int main() {

    int arr[] = {35, 33, 42, 10, 14, 19, 27, 44, 26, 31};

    int len = sizeof(arr) / sizeof(arr[0]); /* calculate array length */

    int low = 0; /* low index of array */
    int high = len - 1; /* high index of array */

    printf("Before sorted\n");
    printArray(arr, len);

    quickSort(arr, low, high);

    printf("After sorted\n");
    printArray(arr, len);

    return 0;
}

/**
 * swap two number
 * @param pa first pointer
 * @param pb second pointer
 */
void swap(int *pa, int *pb) {
    int temp = *pa;
    *pa = *pb;
    *pb = temp;
}

void quickSort(int *arr, int low, int high) {
    if (low >= high) {
        return;
    }
    int pivot = arr[high]; /* set last element of array as pivot */
    int leftPointer = low;
    int rightPointer = high - 1;
    while (true) {
        while (arr[leftPointer] < pivot) {
            ++leftPointer;
        }
        while (rightPointer > 0 && arr[rightPointer] > pivot) {
            --rightPointer;
        }
        if (leftPointer >= rightPointer) {
            break;
        } else {
            swap(&arr[leftPointer], &arr[rightPointer]);
        }
    }

    swap(&arr[leftPointer], &arr[high]);

    quickSort(arr, low, leftPointer - 1);
    quickSort(arr, leftPointer + 1, high);
}

void printArray(int *arr, int len) {
    for (int i = 0; i < len; ++i) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}




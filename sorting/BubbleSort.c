#include <stdio.h>
#include <stdbool.h>


void bubbleSort(int *arr, int len);

void travelArray(int *arr, int len);


int main() {

    int arr[] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};
    int len = sizeof(arr) / sizeof(arr[0]); /* calculate array length */

    printf("Before sorting\n");
    travelArray(arr, len);

    bubbleSort(arr, len); /* call function to sort */
    printf("After sorting\n");
    travelArray(arr, len);
    return 0;
}

void bubbleSort(int *arr, int len) {
    for (int i = 0; i < len - 1; ++i) {
        bool swapped = false;
        for (int j = 0; j < len - 1 - i; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                swapped = true;
            }
        }
        if (!swapped) { /* the array is already ordered. */
            break;
        }
    }
}

void travelArray(int *arr, int len) {
    for (int i = 0; i < len; ++i) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

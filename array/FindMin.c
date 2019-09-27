#include <stdio.h>

int findMin(const int *arr, int len);

int main() {

    int arr[] = {1, 3, 5, 7, 100, 221, 4, 6, 8, 10};

    int len = sizeof(arr) / sizeof(arr[0]);

    printf("min value is %d\n", findMin(arr, len));
    return 0;
}

/**
 * Find min of array
 * @param arr the array
 * @param len length of {@code arr}
 * @return
 */
int findMin(const int *arr, int len) {
    int min = arr[0];
    for (int i = 1; i < len; ++i) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

#include <stdio.h>

int findMax(const int *arr, int len);

int main() {

    int arr[] = {1, 3, 5, 7, 100, 221, 4, 6, 8, 10};

    int len = sizeof(arr) / sizeof(arr[0]);

    printf("max value is %d\n", findMax(arr, len));
    return 0;
}

/**
 * Find max of array
 * @param arr the array
 * @param len length of {@code arr}
 * @return
 */
int findMax(const int *arr, int len) {
    int max = arr[0];
    for (int i = 1; i < len; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

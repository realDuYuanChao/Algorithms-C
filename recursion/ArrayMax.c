#include <stdio.h>

/**
 * get max value in array
 * @param arr the Array
 * @param low the low index
 * @param high the high index
 * @return max number of array
 */
int max(const int *arr, int low, int high) {
    if (low >= high) {
        return arr[low];
    }
    int mid = low + (high - low) / 2;
    int leftMax = max(arr, low, mid);
    int rightMax = max(arr, mid + 1, high);
    return leftMax >= rightMax ? leftMax : rightMax;
}

int min(const int *arr, int low, int high) {
    if (low >= high) {
        return arr[low];
    }
    int mid = low + (high - low) / 2;
    int leftMin = min(arr, low, mid);
    int rightMin = min(arr, mid + 1, high);
    return leftMin <= rightMin ? leftMin : rightMin;
}

int main() {
    int arr[] = {1, 3, 5, 7, 100, 221, 4, 6, 8, 10};

    int len = sizeof(arr) / sizeof(arr[0]);
    printf("max value is %d\n", max(arr, 0, len - 1));
    printf("min value is %d\n", min(arr, 0, len - 1));
    return 0;
}
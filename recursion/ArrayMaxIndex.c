#include <stdio.h>

int maxValueIndex(const int *arr, int low, int high) {
    if (low >= high) {
        return low;
    }
    int mid = low + (high - low) / 2;
    int leftMaxIndex = maxValueIndex(arr, low, mid);
    int rightMaxIndex = maxValueIndex(arr, mid + 1, high);
    return arr[leftMaxIndex] >= arr[rightMaxIndex] ? leftMaxIndex : rightMaxIndex;
}

int main() {
    int arr[] = {1, 3, 5, 7, 100, 221, 4, 6, 8, 10};

    int len = sizeof(arr) / sizeof(arr[0]);

    printf("index of max value is %d\n", maxValueIndex(arr, 0, len - 1));
    return 0;
}


#include <stdio.h>


int binarySearch(const int *arr, int len, int searchX);

int main() {

    int arr[] = {-1, 3, 5, 8, 9, 10, 20, 27, 30, 99};

    int len = sizeof(arr) / sizeof(arr[0]); /* calculate array length */
    int searchX = 10;
    int pos = binarySearch(arr, len, searchX);

    if (pos != -1) {
        printf("%d is found at index %d.\n", searchX, pos);
    } else {
        printf("%d is not found.\n", searchX);
    }
    return 0;
}

int binarySearch(const int *arr, int len, int searchX) {
    int low = 0;
    int high = len - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (searchX == arr[mid]) { /* found it */
            return mid;
        } else if (searchX > arr[mid]) { /* [mid + 1, high] */
            low = mid + 1;
        } else {
            high = mid - 1; /* [low, mid - 1] */
        }
    }
    return -1; /* searchX not found in array */
}


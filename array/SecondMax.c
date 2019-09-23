#include <stdio.h>
#include <limits.h>

/**
 * get second max of array
 * @param arr the Array
 * @param len the array length
 * @return return second max if searched otherwise return -1
 */
int getSecondMax(const int *arr, int len) {
    int secondMax = INT_MIN; //-2147483647 - 1
    int max = INT_MIN + 1;
    for (int i = 0; i < len; ++i) {
        if (arr[i] > max) {
            secondMax = max;
            max = arr[i];
        } else if (arr[i] > secondMax && arr[i] != max) {
            secondMax = arr[i];
        }
    }
    return secondMax != INT_MIN + 1 ? secondMax : -1;
}

int main() {
    int arr[] = {0, 3, -1, 4, 5};
    int len = sizeof(arr) / sizeof(arr[0]);

    int secondMax = getSecondMax(arr, len);
    secondMax != -1 ? printf("the second max = %d\n", secondMax) : printf("not found second max\n");
    return 0;
}


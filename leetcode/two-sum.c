/*
Given an array of integers, return indices of
the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution,
and you may not use the same element twice.

Example:

Given nums = [2, 7, 11, 15], target = 9,

        Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].

link: https://leetcode.com/problems/two-sum/
*/

#include <stdio.h>
#include <stdlib.h>

int *twoSum(const int *nums, int numsSize, int target);

int main() {
    int nums[] = {2, 7, 11, 15};
    int numSize = sizeof(nums) / sizeof(nums[0]);
    int target = 9;
    int *result = twoSum(nums, numSize, target);

    printf("the result = [%d,%d]\n", result[0], result[1]);
    return 0;
}

int *twoSum(const int *nums, int numsSize, int target) {
    int *result = (int *) malloc(sizeof(int) * 2);

    for (int i = 0; i < numsSize - 1; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }
    printf("Sorry, no such target");
    exit(0);
}

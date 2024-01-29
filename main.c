#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* result = (int*)malloc(sizeof(int) * 2);

    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if ((nums[i] + nums[j]) == target) {
                result[0] = i;
                result[1] = j;

                *returnSize = sizeof(int) * 2;

                return result;
            }
        }
    }

    return NULL;
}

int main() {
    int numsSize = 3;
    int target = 3;
    int* returnSize = (int*)malloc(sizeof(int));
    int* nums = (int*)malloc(sizeof(int) * numsSize);
    for (int i = 0; i < numsSize; i++) {
        nums[i] = i + 1;
    }

    int* result = twoSum(nums, numsSize, target, returnSize);

    for (int i = 0; i < 2; i++) {
        printf("%d, ", result[i]);
    }

    free(returnSize);
    free(nums);
    free(result);

    return 0;
}

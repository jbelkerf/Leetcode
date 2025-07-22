/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

#include <stdlib.h>
#include <stdio.h>

int* twoSum(int* numbers, int numbersSize, int target, int* returnSize)
{
    int start = 0;
    int end = numbersSize - 1;
    int sum = 0;
    int *arr = malloc(2 * sizeof(int));

    while (start < end)
    {
        sum = numbers[start] + numbers[end];
        if (sum == target)
        {
            arr[0] = numbers[start];
            arr[1] = numbers[end];
            *returnSize = 2;
            return arr;
        }
        else if (sum < target)
        {
            start++;
        }
        else
            end--;
    }
    *returnSize = 0;
    return NULL;
}

int main()
{
    int arr[] = {2,7,11,15};
    int len;

    int *re = twoSum(arr, 4, 9, &len);
    int i = 0;
    while (i < len)
    {
        printf("%d ", re[i]);
        i++;
    }
}
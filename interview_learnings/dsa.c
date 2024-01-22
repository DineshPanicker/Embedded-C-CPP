
#include <stdio.h>
#include <stdlib.h>

// Function to find the two elements that appear only once in an integer array
int* singleNumber(int* nums, int numsSize, int* returnSize) {
    int xorAll = 0;
    // Calculate XOR of all elements in the array
    for (int i = 0; i < numsSize; i++) {
        xorAll ^= nums[i];
    }
    // Find the rightmost set bit in the XOR result
    int rightmostSetBit = 1;
    while ((xorAll & rightmostSetBit) == 0) {
        rightmostSetBit <<= 1;
    }
    int first = 0, second = 0;
    // Divide the array elements into two groups based on the rightmost set bit
    for (int i = 0; i < numsSize; i++) {
        if ((nums[i] & rightmostSetBit) == 0) {
            first ^= nums[i];
        } else {
            second ^= nums[i];
        }
    }
    // Allocate memory for result array
    int* result = (int*) malloc(sizeof(int) * 2);
    result[0] = first;
    result[1] = second;
    // Set return size
returnSize = 2;
    return result;
}

// Test program
int main() {
    int nums1[] = {1, 2, 1, 3, 2, 5};
    int returnSize1 = 0;
    int result1 = singleNumber(nums1, 6, &returnSize1);
    printf('[');
    for (int i = 0; i < returnSize1; i++) {
        printf('%d', result1[i]);
        if (i < returnSize1 - 1) printf(', ');
    }
    printf(']\n');
    free(result1);

    int nums2[] = {-1, 0};
    int returnSize2 = 0;
    int* result2 = singleNumber(nums2, 2, &returnSize2);
    printf('[');
    for (int i = 0; i < returnSize2; i++) {
        printf('%d', result2[i]);
        if (i < returnSize2 - 1) printf(', ');
    }
    printf(']\n');
    free(result2);

    int nums3[] = {0, 1};
    int returnSize3 = 0;
    int* result3 = singleNumber(nums3, 2, &returnSize3);
    printf('[');
    for (int i = 0; i < returnSize3; i++) {
        printf('%d', result3[i]);
        if (i < returnSize3 - 1) printf(', ');
    }
    printf(']\n');
    free(result3);

    return 0;
} 
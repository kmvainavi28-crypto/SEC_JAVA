/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize) {
    // Set the return size to match the input array size
    *returnSize = numsSize;
    
    // Allocate memory for the output array
    int* result = (int*)malloc(numsSize * sizeof(int));
    if (numsSize == 0) {
        return result;
    }
    
    // Initialize the first element
    result[0] = nums[0];
    
    // Compute the running sum iteratively
    for (int i = 1; i < numsSize; i++) {
        result[i] = result[i - 1] + nums[i];
    }
    
    return result;
}

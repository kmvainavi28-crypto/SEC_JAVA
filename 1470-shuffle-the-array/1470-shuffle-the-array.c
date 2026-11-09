


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize) {
    // 1. Allocate memory for the result array
    int* result = (int*)malloc(numsSize * sizeof(int));
    if (result == NULL) {
        *returnSize = 0;
        return NULL;
    }
    
    // 2. Set the return size for the caller
    *returnSize = numsSize;
    
    // 3. Interleave the elements
    for (int i = 0; i < n; i++) {
        result[2 * i] = nums[i];       // Places x_i at even indices
        result[2 * i + 1] = nums[i + n];   // Places y_i at odd indices
    }
    
    return result;
}

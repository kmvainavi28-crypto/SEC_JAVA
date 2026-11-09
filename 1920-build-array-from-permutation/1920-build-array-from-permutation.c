/**
 * Note: The returned array must be mallocked, assume caller calls free().
 */
int* buildArray(int* nums, int numsSize, int* returnSize) {
    // 1. Allocate memory for the result array
    int* ans = (int*)malloc(numsSize * sizeof(int));
    
    // 2. Set the return size for the caller
    *returnSize = numsSize;
    
    // 3. Build the array based on the permutation rule: ans[i] = nums[nums[i]]
    for (int i = 0; i < numsSize; i++) {
        ans[i] = nums[nums[i]];
    }
    
    return ans;
}

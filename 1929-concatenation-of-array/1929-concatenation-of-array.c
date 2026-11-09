/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    // 1. Define the size of the new concatenated array
    *returnSize = 2 * numsSize;
    
    // 2. Allocate memory for the result array
    int* ans = (int*)malloc((*returnSize) * sizeof(int));
    
    // 3. Fill the new array with the duplicated elements
    for (int i = 0; i < numsSize; i++) {
        ans[i] = nums[i];            // First half
        ans[i + numsSize] = nums[i]; // Second half
    }
    
    return ans;
}

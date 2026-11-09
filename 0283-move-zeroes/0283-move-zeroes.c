void moveZeroes(int* nums, int numsSize) {
    int lastNonZeroFoundAt = 0;
    
    // Move all non-zero elements forward
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[lastNonZeroFoundAt++] = nums[i];
        }
    }
    
    // Fill the remaining positions with zeroes
    for (int i = lastNonZeroFoundAt; i < numsSize; i++) {
        nums[i] = 0;
    }
}

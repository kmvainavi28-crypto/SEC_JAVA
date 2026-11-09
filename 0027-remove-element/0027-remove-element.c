int removeElement(int* nums, int numsSize, int val) {
    int k = 0; // Pointer to place the next element not equal to val
    
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != val) {
            nums[k] = nums[i];
            k++;
        }
    }
    
    return k; // k represents the number of elements not equal to val
}

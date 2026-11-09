int pivotIndex(int* nums, int numsSize) {
    int total_sum = 0;
    int left_sum = 0;

    // Step 1: Calculate the total sum of the array
    for (int i = 0; i < numsSize; i++) {
        total_sum += nums[i];
    }

    // Step 2: Iterate through and find the pivot index
    for (int i = 0; i < numsSize; i++) {
        // If left sum equals right sum, return the current index
        if (left_sum == (total_sum - left_sum - nums[i])) {
            return i;
        }
        // Update the left sum for the next iteration
        left_sum += nums[i];
    }

    return -1;
}

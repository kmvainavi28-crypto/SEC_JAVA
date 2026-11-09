int findNumbers(int* nums, int numsSize) {
    int evenDigitCount = 0;
    
    for (int i = 0; i < numsSize; i++) {
        int currentNum = nums[i];
        int digits = 0;
        
        // Count digits of the current number
        while (currentNum > 0) {
            digits++;
            currentNum /= 10;
        }
        
        // Check if the number of digits is even
        if (digits % 2 == 0) {
            evenDigitCount++;
        }
    }
    
    return evenDigitCount;
}

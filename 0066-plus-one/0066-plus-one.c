/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    // Traverse from the least significant digit (right to left)
    for (int i = digitsSize - 1; i >= 0; i--) {
        if (digits[i] < 9) {
            digits[i]++;
            *returnSize = digitsSize;
            
            // Allocate memory for the result and copy over
            int* result = (int*)malloc(digitsSize * sizeof(int));
            for (int j = 0; j < digitsSize; j++) {
                result[j] = digits[j];
            }
            return result;
        }
        // If the digit is 9, it becomes 0 due to carry over
        digits[i] = 0;
    }
    
    // If all digits were 9 (e.g., [9, 9, 9] ->)
    *returnSize = digitsSize + 1;
    int* result = (int*)malloc((*returnSize) * sizeof(int));
    
    result[0] = 1;
    for (int i = 1; i < *returnSize; i++) {
        result[i] = 0;
    }
    
    return result;
}

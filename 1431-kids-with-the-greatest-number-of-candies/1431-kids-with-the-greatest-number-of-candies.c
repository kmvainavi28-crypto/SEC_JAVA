/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    // 1. Find the maximum number of candies any kid currently has
    int maxCandies = 0;
    for (int i = 0; i < candiesSize; i++) {
        if (candies[i] > maxCandies) {
            maxCandies = candies[i];
        }
    }
    
    // 2. Allocate memory for the boolean result array
    bool* result = (bool*)malloc(candiesSize * sizeof(bool));
    if (result == NULL) {
        *returnSize = 0;
        return NULL;
    }
    
    // 3. Compare each kid's potential total with the maximum
    for (int i = 0; i < candiesSize; i++) {
        if (candies[i] + extraCandies >= maxCandies) {
            result[i] = true;
        } else {
            result[i] = false;
        }
    }
    
    // 4. Set the return size required by the LeetCode system
    *returnSize = candiesSize;
    
    return result;
}

int numIdenticalPairs(int* nums, int numsSize) {
    // Array to store the frequency of each number (since nums[i] <= 100)
    int counts[101] = {0};
    int goodPairs = 0;
    
    for (int i = 0; i < numsSize; i++) {
        // If this number appeared before, it forms a good pair with 
        // every previous occurrence of itself.
        goodPairs += counts[nums[i]];
        
        // Update the frequency of the current number
        counts[nums[i]]++;
    }
    
    return goodPairs;
}

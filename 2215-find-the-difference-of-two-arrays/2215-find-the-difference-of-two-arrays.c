

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *returnColumnSizes array
 * must be mallocated, assume caller calls free().
 */
int** findDifference(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize, int** returnColumnSizes) {
    // There are always exactly 2 rows in the output
    *returnSize = 2;
    
    // Allocate space for the array of column sizes and the result table
    *returnColumnSizes = (int*)malloc(2 * sizeof(int));
    int** answer = (int**)malloc(2 * sizeof(int*));
    
    // Since constraints indicate -1000 <= nums[i] <= 1000, 
    // we use a boolean flag lookup array of size 2001 (offset = 1000)
    bool presentInNums1[2001] = {false};
    bool presentInNums2[2001] = {false};
    
    // Mark elements present in nums1
    for (int i = 0; i < nums1Size; i++) {
        presentInNums1[nums1[i] + 1000] = true;
    }
    
    // Mark elements present in nums2
    for (int i = 0; i < nums2Size; i++) {
        presentInNums2[nums2[i] + 1000] = true;
    }
    
    // Allocate maximum potential size for output lists
    int* list0 = (int*)malloc(nums1Size * sizeof(int));
    int* list1 = (int*)malloc(nums2Size * sizeof(int));
    
    int count0 = 0;
    int count1 = 0;
    
    // Elements in nums1 but NOT in nums2 (tracked uniquely to avoid duplicates)
    bool visited[2001] = {false};
    for (int i = 0; i < nums1Size; i++) {
        int idx = nums1[i] + 1000;
        if (!presentInNums2[idx] && !visited[idx]) {
            list0[count0++] = nums1[i];
            visited[idx] = true;
        }
    }
    
    // Reset visited for the second array traversal
    for (int i = 0; i < 2001; i++) visited[i] = false;
    
    // Elements in nums2 but NOT in nums1
    for (int i = 0; i < nums2Size; i++) {
        int idx = nums2[i] + 1000;
        if (!presentInNums1[idx] && !visited[idx]) {
            list1[count1++] = nums2[i];
            visited[idx] = true;
        }
    }
    
    // Resize allocated pointers down to actual filled counts
    answer[0] = (int*)realloc(list0, count0 * sizeof(int));
    answer[1] = (int*)realloc(list1, count1 * sizeof(int));
    
    (*returnColumnSizes)[0] = count0;
    (*returnColumnSizes)[1] = count1;
    
    return answer;
}

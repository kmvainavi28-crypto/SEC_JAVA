char* addBinary(char* a, char* b) {
    int lenA = strlen(a);
    int lenB = strlen(b);
    int maxLen = lenA > lenB ? lenA : lenB;
    
    // Allocate space for the maximum possible length: 
    // maxLen + 1 (for a potential final carry) + 1 (for the null terminator '\0')
    char* result = (char*)malloc((maxLen + 2) * sizeof(char));
    
    int i = lenA - 1;
    int j = lenB - 1;
    int k = 0; // pointer for tracking position in result array
    int carry = 0;
    
    // Loop from right to left through both strings
    while (i >= 0 || j >= 0 || carry > 0) {
        int sum = carry;
        
        if (i >= 0) {
            sum += a[i] - '0'; // Convert char digit to integer
            i--;
        }
        if (j >= 0) {
            sum += b[j] - '0';
            j--;
        }
        
        result[k++] = (sum % 2) + '0'; // Current binary digit
        carry = sum / 2;               // Calculate new carry
    }
    
    result[k] = '\0'; // Add null terminator
    
    // Reverse the result string since it was built backward
    for (int start = 0, end = k - 1; start < end; start++, end--) {
        char temp = result[start];
        result[start] = result[end];
        result[end] = temp;
    }
    
    return result;
}

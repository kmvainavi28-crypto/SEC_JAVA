#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    // If the array is empty, return an empty string
    if (strsSize == 0) {
        return "";
    }
    
    // Start by assuming the first string is the common prefix
    char* prefix = strs[0];
    
    // Compare the prefix with each string in the array
    for (int i = 1; i < strsSize; i++) {
        // While the current string does not start with the prefix
        while (strncmp(strs[i], prefix, strlen(prefix)) != 0) {
            // Shorten the prefix by one character from the end
            int len = strlen(prefix);
            if (len == 0) {
                return "";
            }
            prefix[len - 1] = '\0';
        }
    }
    
    return prefix;
}

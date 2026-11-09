int lengthOfLastWord(char* s) {
    int length = 0;
    int i = 0;

    // Find the end of the string
    while (s[i] != '\0') {
        i++;
    }
    
    // Move index to the last character
    i--; 

    // Step 1: Skip any trailing spaces
    while (i >= 0 && s[i] == ' ') {
        i--;
    }

    // Step 2: Count the length of the last word
    while (i >= 0 && s[i] != ' ') {
        length++;
        i--;
    }

    return length;
}

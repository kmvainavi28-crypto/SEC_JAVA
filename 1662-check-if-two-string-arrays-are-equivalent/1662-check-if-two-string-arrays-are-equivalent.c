
bool arrayStringsAreEqual(char** word1, int word1Size, char** word2, int word2Size) {
    int arrIdx1 = 0, charIdx1 = 0;
    int arrIdx2 = 0, charIdx2 = 0;
    
    // Loop until we completely traverse at least one of the word arrays
    while (arrIdx1 < word1Size && arrIdx2 < word2Size) {
        // If characters at the current pointers don't match, strings aren't equivalent
        if (word1[arrIdx1][charIdx1] != word2[arrIdx2][charIdx2]) {
            return false;
        }
        
        // Move to the next character in both strings
        charIdx1++;
        charIdx2++;
        
        // If we reached the end of the current string fragment in word1, move to the next string
        if (word1[arrIdx1][charIdx1] == '\0') {
            arrIdx1++;
            charIdx1 = 0;
        }
        
        // If we reached the end of the current string fragment in word2, move to the next string
        if (word2[arrIdx2][charIdx2] == '\0') {
            arrIdx2++;
            charIdx2 = 0;
        }
    }
    
    // Both arrays must be fully processed at the same time to be perfectly equivalent
    return (arrIdx1 == word1Size && arrIdx2 == word2Size);
}

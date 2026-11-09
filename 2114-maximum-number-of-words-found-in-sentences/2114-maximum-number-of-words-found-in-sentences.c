
int mostWordsFound(char** sentences, int sentencesSize) {
    int maxWords = 0;
    
    for (int i = 0; i < sentencesSize; i++) {
        int spaces = 0;
        char* str = sentences[i];
        
        // Count the number of spaces in the current sentence
        for (int j = 0; str[j] != '\0'; j++) {
            if (str[j] == ' ') {
                spaces++;
            }
        }
        
        // Total words = spaces + 1
        int currentWords = spaces + 1;
        
        // Update maxWords if current sentence has more words
        if (currentWords > maxWords) {
            maxWords = currentWords;
        }
    }
    
    return maxWords;
}

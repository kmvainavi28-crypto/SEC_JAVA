

char * interpret(char * command){
    int len = strlen(command);
    // Allocate space for the worst-case scenario (same length + null terminator)
    char *result = (char *)malloc((len + 1) * sizeof(char));
    
    int i = 0; // Pointer for traversing the input command
    int j = 0; // Pointer for building the result string
    
    while (command[i] != '\0') {
        if (command[i] == 'G') {
            result[j++] = 'G';
            i++;
        } 
        else if (command[i] == '(' && command[i+1] == ')') {
            result[j++] = 'o';
            i += 2; // Skip both characters '(' and ')'
        } 
        else if (command[i] == '(' && command[i+1] == 'a') {
            result[j++] = 'a';
            result[j++] = 'l';
            i += 4; // Skip the entire "(al)" token
        }
    }
    
    result[j] = '\0'; // Add the trailing null terminator
    return result;
}

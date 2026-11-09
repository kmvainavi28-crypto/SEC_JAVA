
char * defangIPaddr(char * address){
    // Calculate the length of the original address
    int len = strlen(address);
    
    // Each of the 3 periods adds 2 extra characters ('.' becomes '[.]')
    // plus 1 extra byte for the null terminator '\0'
    char *result = (char *)malloc((len + 7) * sizeof(char));
    
    int i = 0; // Pointer for the input address
    int j = 0; // Pointer for the defanged result string
    
    while (address[i] != '\0') {
        if (address[i] == '.') {
            result[j++] = '[';
            result[j++] = '.';
            result[j++] = ']';
        } else {
            result[j++] = address[i];
        }
        i++;
    }
    
    // Don't forget to null-terminate the new string
    result[j] = '\0';
    
    return result;
}

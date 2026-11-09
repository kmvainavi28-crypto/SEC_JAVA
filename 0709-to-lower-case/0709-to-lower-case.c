char* toLowerCase(char* s) {
    for (int i = 0; s[i] != '\0'; i++) {
        // Check if the character is an uppercase letter
        if (s[i] >= 'A' && s[i] <= 'Z') {
            // Convert to lowercase by adding 32 (the ASCII difference)
            s[i] = s[i] + 32;
        }
    }
    return s;
}

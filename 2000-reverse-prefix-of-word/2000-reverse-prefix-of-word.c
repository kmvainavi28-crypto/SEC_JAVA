char* reversePrefix(char* word, char ch) {
    int target_index = -1;

    // Find the first occurrence of the character
    for (int i = 0; word[i] != '\0'; i++) {
        if (word[i] == ch) {
            target_index = i;
            break;
        }
    }

    // If the character is found, reverse the prefix in-place
    if (target_index != -1) {
        int left = 0;
        int right = target_index;
        while (left < right) {
            char temp = word[left];
            word[left] = word[right];
            word[right] = temp;
            left++;
            right--;
        }
    }

    return word;
}

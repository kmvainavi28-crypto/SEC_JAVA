int largestAltitude(int* gain, int gainSize) {
    int max_alt = 0;
    int current_alt = 0;
    
    for (int i = 0; i < gainSize; i++) {
        current_alt += gain[i];
        if (current_alt > max_alt) {
            max_alt = current_alt;
        }
    }
    
    return max_alt;
}

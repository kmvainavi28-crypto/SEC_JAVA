
#include <string.h>

int lengthOfLongestSubstring(char* s) {

    int lastSeen[256];

        for (int i = 0; i < 256; i++) {
                lastSeen[i] = -1;
                    }

                        int left = 0;
                            int maxLength = 0;

                                for (int right = 0; s[right] != '\0'; right++) {

                                        unsigned char ch = (unsigned char)s[right];

                                                // If character is repeated, move left pointer
                                                        if (lastSeen[ch] >= left) {
                                                                    left = lastSeen[ch] + 1;
                                                                            }

                                                                                    // Update last seen position
                                                                                            lastSeen[ch] = right;

                                                                                                    // Calculate maximum length
                                                                                                            int currentLength = right - left + 1;

                                                                                                                    if (currentLength > maxLength) {
                                                                                                                                maxLength = currentLength;
                                                                                                                                        }
                                                                                                                                            }

                                                                                                                                                return maxLength;
                                                                                                                                                }
                                                                                                                                                

#include <stdlib.h>
#include <string.h>

char* longestPalindrome(char* s) {

    int n = strlen(s);

        if (n == 0) {
                char *empty = malloc(1);
                        empty[0] = '\0';
                                return empty;
                                    }

                                        int start = 0;
                                            int maxLength = 1;

                                                for (int i = 0; i < n; i++) {

                                                        int left = i;
                                                                int right = i;

                                                                        // Odd length palindrome
                                                                                while (left >= 0 && right < n &&
                                                                                               s[left] == s[right]) {
                                                                                                           if (right - left + 1 > maxLength) {
                                                                                                                           start = left;
                                                                                                                                           maxLength = right - left + 1;
                                                                                                                                                       }
                                                                                                                                                                   left--;
                                                                                                                                                                               right++;
                                                                                                                                                                                       }

                                                                                                                                                                                               left = i;
                                                                                                                                                                                                       right = i + 1;

                                                                                                                                                                                                               // Even length palindrome
                                                                                                                                                                                                                       while (left >= 0 && right < n &&
                                                                                                                                                                                                                                      s[left] == s[right]) {
                                                                                                                                                                                                                                                  if (right - left + 1 > maxLength) {
                                                                                                                                                                                                                                                                  start = left;
                                                                                                                                                                                                                                                                                  maxLength = right - left + 1;
                                                                                                                                                                                                                                                                                              }
                                                                                                                                                                                                                                                                                                          left--;
                                                                                                                                                                                                                                                                                                                      right++;
                                                                                                                                                                                                                                                                                                                              }
                                                                                                                                                                                                                                                                                                                                  }

                                                                                                                                                                                                                                                                                                                                      char *result = malloc((maxLength + 1) * sizeof(char));

                                                                                                                                                                                                                                                                                                                                          strncpy(result, s + start, maxLength);
                                                                                                                                                                                                                                                                                                                                              result[maxLength] = '\0';

                                                                                                                                                                                                                                                                                                                                                  return result;
                                                                                                                                                                                                                                                                                                                                                  }
                                                                                                                                                                                                                                                                                                                                                  

#include <limits.h>

int myAtoi(char* s) {

    int i = 0;
        int sign = 1;
            long long result = 0;

                // Step 1: Skip leading whitespaces
                    while (s[i] == ' ') {
                            i++;
                                }

                                    // Step 2: Check the sign
                                        if (s[i] == '-') {
                                                sign = -1;
                                                        i++;
                                                            }
                                                                else if (s[i] == '+') {
                                                                        sign = 1;
                                                                                i++;
                                                                                    }

                                                                                        // Step 3: Convert digits into integer
                                                                                            while (s[i] >= '0' && s[i] <= '9') {

                                                                                                    int digit = s[i] - '0';

                                                                                                            result = result * 10 + digit;

                                                                                                                    // Step 4: Handle integer overflow
                                                                                                                            if (sign == 1 && result > INT_MAX) {
                                                                                                                                        return INT_MAX;
                                                                                                                                                }

                                                                                                                                                        if (sign == -1 && result > 2147483648LL) {
                                                                                                                                                                    return INT_MIN;
                                                                                                                                                                            }

                                                                                                                                                                                    i++;
                                                                                                                                                                                        }

                                                                                                                                                                                            return (int)(sign * result);
                                                                                                                                                                                            }
                                                                                                                                                                                            
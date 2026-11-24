
int reverse(int x) {

    int reversed = 0;

        while (x != 0) {

                int digit = x % 10;

                        // Check overflow before multiplication
                                if (reversed > 214748364 ||
                                            (reversed == 214748364 && digit > 7)) {
                                                        return 0;
                                                                }

                                                                        // Check underflow
                                                                                if (reversed < -214748364 ||
                                                                                            (reversed == -214748364 && digit < -8)) {
                                                                                                        return 0;
                                                                                                                }

                                                                                                                        reversed = reversed * 10 + digit;

                                                                                                                                x = x / 10;
                                                                                                                                    }

                                                                                                                                        return reversed;
                                                                                                                                        }
                                                                                                                                        
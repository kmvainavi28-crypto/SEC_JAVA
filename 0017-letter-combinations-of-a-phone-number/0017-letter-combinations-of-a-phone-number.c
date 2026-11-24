
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *map[] = {
    "", "", "abc", "def", "ghi",
        "jkl", "mno", "pqrs", "tuv", "wxyz"
        };

        void backtrack(char *digits, int index, char *current,
                       char **result, int *returnSize) {

                           if (digits[index] == '\0') {
                                   current[index] = '\0';
                                           result[*returnSize] = malloc(index + 1);
                                                   strcpy(result[*returnSize], current);
                                                           (*returnSize)++;
                                                                   return;
                                                                       }

                                                                           int digit = digits[index] - '0';
                                                                               char *letters = map[digit];

                                                                                   for (int i = 0; letters[i] != '\0'; i++) {
                                                                                           current[index] = letters[i];
                                                                                                   backtrack(digits, index + 1, current,
                                                                                                                     result, returnSize);
                                                                                                                         }
                                                                                                                         }

                                                                                                                         char** letterCombinations(char* digits, int* returnSize) {

                                                                                                                             *returnSize = 0;

                                                                                                                                 int len = strlen(digits);

                                                                                                                                     if (len == 0) {
                                                                                                                                             return NULL;
                                                                                                                                                 }

                                                                                                                                                     int capacity = 1;

                                                                                                                                                         for (int i = 0; i < len; i++) {
                                                                                                                                                                 capacity *= strlen(map[digits[i] - '0']);
                                                                                                                                                                     }

                                                                                                                                                                         char **result = malloc(capacity * sizeof(char *));
                                                                                                                                                                             char *current = malloc(len + 1);

                                                                                                                                                                                 backtrack(digits, 0, current, result, returnSize);

                                                                                                                                                                                     free(current);

                                                                                                                                                                                         return result;
                                                                                                                                                                                         }
                                                                                                                                                                                         
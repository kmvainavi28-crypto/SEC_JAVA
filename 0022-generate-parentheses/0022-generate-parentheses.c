
#include <stdlib.h>
#include <string.h>

void backtrack(char **result, int *returnSize, char *current,
               int open, int close, int n) {

                   if (open == n && close == n) {
                           current[2 * n] = '\0';

                                   result[*returnSize] = (char *)malloc(2 * n + 1);
                                           strcpy(result[*returnSize], current);

                                                   (*returnSize)++;
                                                           return;
                                                               }

                                                                   // Add opening bracket
                                                                       if (open < n) {
                                                                               current[open + close] = '(';
                                                                                       backtrack(result, returnSize, current,
                                                                                                         open + 1, close, n);
                                                                                                             }

                                                                                                                 // Add closing bracket
                                                                                                                     if (close < open) {
                                                                                                                             current[open + close] = ')';
                                                                                                                                     backtrack(result, returnSize, current,
                                                                                                                                                       open, close + 1, n);
                                                                                                                                                           }
                                                                                                                                                           }

                                                                                                                                                           char** generateParenthesis(int n, int* returnSize) {

                                                                                                                                                               int maxResults = 5000;

                                                                                                                                                                   char **result = (char **)malloc(maxResults * sizeof(char *));
                                                                                                                                                                       char *current = (char *)malloc((2 * n + 1) * sizeof(char));

                                                                                                                                                                           *returnSize = 0;

                                                                                                                                                                               backtrack(result, returnSize, current, 0, 0, n);

                                                                                                                                                                                   free(current);

                                                                                                                                                                                       return result;
                                                                                                                                                                                       }
                                                                                                                                                                                       
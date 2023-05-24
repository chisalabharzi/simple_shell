#include "main.h"

/**
 * tokenize_input - Tokenizes a string and stores tokens in an array.
 * @buffer: The input string to be tokenized.
 * @token_array: The array to store the tokens.
 *
 * This function uses the strtok() function to tokenize the input string
 * based on the specified delimiter and stores the tokens in the token_array.
 * The last element of the token_array is set to NULL to indicate the end.
 */

void tokenize_input(char *buffer, char *token_array[])
{
char *token;
int token_count = 0;
const char *delim = " ";
if (buffer[0] == '\0' || (buffer[0] == ' ' && buffer[1] == '\0'))
{
token_array[0] = NULL;
return;
}
token = _strtok(buffer, delim);
while (token != NULL)
{
token_array[token_count++] = token;
token = _strtok(NULL, delim);
}
token_array[token_count] = NULL;
}

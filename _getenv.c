#include "main.h"

/**
 * _getenv - Get the value of an environment variable
 * @n: Name of the environment variable
 *
 * Return: Pointer to the value of the environment variable,
 *         or NULL if the variable is not found
 */

char *_getenv(char *n)
{
int i;
/* extern char **environ; */
size_t n_len;
if (n == NULL || *n == '\0')
return (NULL);
n_len = _strlen(n);
for (i = 0; environ[i] != NULL; i++)
{
if (_strncmp(environ[i], n, n_len) == 0 && environ[i][n_len] == '=')
{
return (environ[i] + n_len + 1);
}
}
return (NULL);  /* Variable not found */
}

/**
 * _strncmp - Compare at most n characters of two strings
 * @str1: First string to compare
 * @str2: Second string to compare
 * @n: Maximum number of characters to compare
 *
 * Return:
 *   - Negative integer if str1 is less than str2
 *   - Zero if str1 matches str2 up to n characters
 *   - Positive integer if str1 is greater than str2
 */

int _strncmp(const char *str1, const char *str2, size_t n)
{
	size_t i;
for (i = 0; i < n; i++)
{
if (str1[i] != str2[i])
return (str1[i] - str2[i]);
else if (str1[i] == '\0') /* Reached the end of one of the strings */
return (0);
}
return (0);/* Both strings match up to n characters */
}

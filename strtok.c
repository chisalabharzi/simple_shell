#include "main.h"

/**
 * _strchr - Locates the first occurrence of a character in a string
 * @s: The string to be searched
 * @c: The character to be located
 *
 * Return: A pointer to the first occurrence of the character in the string,
 *         or NULL if the character is not found
 */

char *_strchr(const char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return ((char *)s);
s++;
}
return (NULL);
}

/**
 * _strtok - Breaks a string into a sequence of tokens
 * @str: The string to be tokenized
 * @delim: The delimiter used to tokenize the string
 *
 * Return: A pointer to the next
 * token found in the string,
 * or NULL if no more tokens are found
 */

char *_strtok(char *str, const char *delim)
{
static char *lastToken;  /* Stores the position of the last token */
char *tokenStart;
if (str == NULL)
str = lastToken;
if (str == NULL || *str == '\0')
return (NULL);
while (*str && _strchr(delim, *str))
++str;
if (*str == '\0')
return (NULL);
tokenStart = str;
while (*str && !_strchr(delim, *str))
++str;
if (*str == '\0')
{
lastToken = str;
return (tokenStart);
}
*str = '\0';
lastToken = str + 1;
return (tokenStart);
}

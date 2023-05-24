#include "main.h"

/**
 * _strlen - the function returns the length of a string
 * @s: string which its length is determined
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int size;

	size = 0;

	while (s[size] != '\0')
	{
		size++;
	}

	return (size);
}

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int length, i;

length = 0;

while (src[length] != '\0')
{
length++;
}

i = 0;
while (i < length)
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';

return (dest);
}
/**
 * _strcat - The function concatenates two strings
 * @dest: string to append to
 * @src: string to add
 *
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
char *p = dest;
while (*p)
{
p++;
}
while (*src)
{
*p++ = *src++;
}
*p = '\0';
return (dest);
}

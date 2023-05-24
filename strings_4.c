#include <stdio.h>

/**
 * _strcspn - Calculates the length of the initial segment of str1
 *            that consists of characters not in str2.
 * @str1: The string to be searched.
 * @str2: The string containing the characters to match.
 *
 * Return: The length of the initial segment of str1 without
 *         any characters from str2.
 */

unsigned int _strcspn(const char *str1, const char *str2)
{
const char *ptr1 = str1;
unsigned int count = 0;
while (*ptr1 != '\0')
{
const char *ptr2 = str2;
while (*ptr2 != '\0')
{
if (*ptr1 == *ptr2)
{
return (count);
}
ptr2++;
}
ptr1++;
count++;
}
return (count);
}

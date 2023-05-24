include "main.h"

/**
 * _puts - the function prints a string to stdout
 * @str: pointer to the string to print
 */
void _puts(char *str)
{
int i = 0;
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}

/**
 * _putchar - writes a character to the standard output (stdout)
 * @c: The character to be written
 *
 * Return: On success, returns the character written as an unsigned char.
 * On error, returns -1.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

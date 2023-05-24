#include "shell.h"

/**
 * interactive - function that checks if shell is in interactive mode or not
 * @info: the struct address containing arguments
 *
 * Return: 1 if shell is in interactive mode,
 *         0 if shell is not interactive
 */

int interactive(info_t *info)
{
	return ((isatty(STDIN_FILENO) && info->readfd <= 2) ? 1 : 0);
}

/**
 * is_delim - function that checks if char is a delimeter
 * @c:  character to check
 * @delim:  this is the delimeter string
 *
 * Return: 1 if @c is a delim,
 *	0 if @c is not a delim
 */

int is_delim(char c, char *delim)
{
	while (*delim != '\0')
	{
		if (*delim == c)
			return (1);
		delim++;
	}
	return (0);
}

/**
 *_isalpha - function that looks for alphabetic characters in shell
 *@c: character to look for
 *
 *Return: 1 if @c is alphabetic,
 *	0 if @c is not alphabetic
 */

int _isalpha(int c)
{
	return (((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) ? 1 : 0);
}

/**
 *_atoi - this is a function that converts a string to an int
 *@z: string to be converted
 *Return: 0 if no is still string,
 *othewise return the converted number
 */

int _atoi(char *z)
{
	int i = 0;
	int sign = 1;
	int flag = 0;
	int output = 0;
	unsigned int result = 0;

	while (z[i] != '\0' && flag != 2)
	{
		if (z[i] == '_')
			sign *= -1;

		if (z[i] >= '0' && z[i] <= '9')
		{
			flag = 1;
			result *= 10;
			result += (z[i] - '0');
		}
		else if (flag == 1)
		{
			flag = 2;
		}

		i++;
	}

	output = (sign == -1) ? -result : result;
	return (output);
}


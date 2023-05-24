#include "main.h"

/**
 * int_to_str - Convert an integer to a string
 * @number: Integer to convert
 * @str: Destination string
 */

void int_to_str(int number, char *str)
{
int digit_count = 0;
int temp = number;
while (temp != 0)
{
digit_count++;
temp /= 10;
}
str[digit_count] = '\0';
while (digit_count > 0)
{
digit_count--;
str[digit_count] = '0' + (number % 10);
number /= 10;
}
}

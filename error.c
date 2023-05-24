#include "main.h"

/**
 * write_error_message - Write an error message to the standard error
 * @program_name: Name of the program
 * @line_number: Line number where the error occurred
 * @command: Command that caused the error
 */

void write_error_message(char *program_name, int line_number, char *command)
{
char error_message[1000];
char line_number_str[10];
_strcpy(error_message, program_name);
_strcat(error_message, ": ");
int_to_str(line_number, line_number_str);
_strcat(error_message, line_number_str);
_strcat(error_message, ": ");
_strcat(error_message, command);
_strcat(error_message, ": not found\n");
write(STDERR_FILENO, error_message, _strlen(error_message));
}

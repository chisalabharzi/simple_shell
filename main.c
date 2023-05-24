#include "main.h"
/**
 * print_prompt - Prints a prompt symbol.
 */
void print_prompt(void)
{
write(STDOUT_FILENO, "$ ", 2);
fflush(stdout);
}

/**
 * handle_command - Handles a command.
 * @t_arr: Array of command arguments.
 * @p_name: Program name.
 * @l_num: Line number.
 * @i_mode: Interactive mode flag.
 */

void handle_command(char *t_arr[], char *p_name, int l_num, int i_mode)
{
pid_t pid;
int status;
if (_strcmp(t_arr[0], "exit") == 0)
{
handle_exit();
}
else if (_strcmp(t_arr[0], "env") == 0)
{
handle_env();
}
else
{
pid = fork();
if (pid < 0)
{
perror("fork failed");
exit(1);
}
else if (pid == 0)
{
execute_command(t_arr, p_name, l_num, i_mode);
exit(1);
}
else
{
waitpid(pid, &status, 0);
}
}
}

/**
 * main - Entry point of the program.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line arguments.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
char *buffer = NULL, *token_array[1000];
size_t no_read = 0;
ssize_t lines_read;
int line_number = 0, interactive_mode = isatty(STDIN_FILENO);
(void)argc;
while (1)
{
if (interactive_mode)
{
print_prompt();
}
lines_read = getline(&buffer, &no_read, stdin);
if (lines_read == -1)
{
free(buffer);
return (0);
}
if (lines_read == 1 && (buffer[0] == '\n' || buffer[0] == ' '))
{
continue;
}
buffer[lines_read - 1] = '\0';
line_number++;
tokenize_input(buffer, token_array);
handle_command(token_array, argv[0], line_number, interactive_mode);
}
free(buffer);
return (0);
}

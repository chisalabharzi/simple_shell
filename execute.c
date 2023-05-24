#include "main.h"

/**
 * execute_command - Execute a command
 * @t_arr: Array of tokens (command and arguments)
 * @p_name: Name of the program
 * @l_num: Line number where the command is executed
 * @i_mode: Flag indicating interactive mode
 */

void execute_command(char *t_arr[], char *p_name, int l_num, int i_mode)
{
char *command = t_arr[0];
char *path = _getenv("PATH");
char command_path[1000];
char *dir;
(void)i_mode;
if (command[0] == '/')
{
if (access(command, X_OK) == 0)
{
execve(command, t_arr, NULL);
}
}
else
{
path = _getenv("PATH");
/* command_path[1000];*/
dir = _strtok(path, ":");
if (path == NULL)
{
write_error_message(p_name, l_num, "getenv");
exit(1);
}
while (dir != NULL)
{
_strcpy(command_path, dir);
_strcat(command_path, "/");
_strcat(command_path, command);
if (access(command_path, X_OK) == 0)
{
execve(command_path, t_arr, NULL);
}
dir = _strtok(NULL, ":");
}
}
write_error_message(p_name, l_num, command);
exit(1);
}

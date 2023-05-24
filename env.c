#include "main.h"
/**
 * handle_env - Print the environment variables
 */

void handle_env(void)
{
int i;
for (i = 0; environ[i] != NULL; i++)
{
write(STDOUT_FILENO, environ[i], _strlen(environ[i]));
write(STDOUT_FILENO, "\n", 1);
}
}

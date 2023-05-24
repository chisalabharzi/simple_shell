#ifndef MAIN
#define MAIN

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
extern char **environ;
char *_getenv(char *name);

/* Team prints */
void _puts(char *str);
int _putchar(char c);

/* Team strings */
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strncmp(const char *str1, const char *str2, size_t n);
int _strcmp(char *s1, char *s2);
char *_strchr(const char *s, char c);
unsigned int _strspn(char *s, char *accept);
unsigned int _strcspn(const char *str1, const char *str2);
char *_strtok(char *str, const char *delim);
void int_to_str(int number, char *str);
void write_error_message(char *program_name, int line_number, char *command);
void tokenize_input(char *buffer, char *token_array[]);
void execute_command(char *t_arr[], char *p_name, int l_numr, int i_mode);
void handle_exit(void);
void handle_env(void);

#endif

#ifndef shell_h
#define shell_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

#define MAX_INPUT 1024
#define MAX_LEN 100

extern char **environ;

void apt();
int read_input(char *input, size_t size);
void tok_input(char *input, char **args);
void exec_command(char **args);
void handle_exit_args(char **arg);
void _path(char *bin, char *path, char **full);

#endif

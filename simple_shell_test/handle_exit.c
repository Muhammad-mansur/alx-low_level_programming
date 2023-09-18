#include "shell.h"

/**
  * handle_exit_args - handles arguments for the built-in exit
  * @arg: argument to be handled
  */

void handle_exit_args(char **arg)
{
	int exit_status = EXIT_SUCCESS;

	if (arg[1] != NULL)
		exit_status = atoi(arg[1]);

	printf("Exiting the shell with status %d\n", exit_status);
	exit(exit_status);
}

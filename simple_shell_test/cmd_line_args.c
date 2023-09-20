#include "shell.h"

/**
  * main - main
  * Return: 0
  */

int main(void)
{
	char inp[MAX_INPUT];
	char *arg[32];

	while (1)
	{
		apt();

		/* If input is empty, exit the shell */
		if (read_input(inp, sizeof(inp)) == 0)
			break;

		tok_input(inp, arg);

		/* If the user enters "exit", exit the shell */
		if (strcmp(arg[0], "exit") == 0)
			break;

		exec_command(arg);
	}

	return (0);
}


/**
  * apt - function to display the shell prompt
  * Return: void
  */

void apt(void)
{
	if (isatty(STDIN_FILENO))
		printf("($) ");
}


/**
  * read_input - function to read user input
  * @input: takes input
  * @size: input size
  * Return: returns 1 if input is read successfully and not empty
  * returns 0 if input is empty
  */

int read_input(char *input, size_t size)
{
	ssize_t read = getline(&input, &size, stdin);

	if (read == -1)
	{
		/* If input is empty and not in interactive mode, Exit */
		if (isatty(STDIN_FILENO))
		{
			return (0);
		}

		perror("getline");
		exit(EXIT_FAILURE);
	}

	return (1);
}


/**
  * tok_input - function to tokenize input
  * @input: character of array containing the user input
  * @arg: array of pointers to store the tokenized arguments
  * Return: void
  */

void tok_input(char *input, char **arg)
{
	char *tok = strtok(input, " \t\n\"\'\\#&*`");
	int count = 0;

	while (tok)
	{
		arg[count++] = tok;
		tok = strtok(NULL, " \t\n\"\'\\#&*`");
	}

	arg[count] = NULL;
}

/**
  * exec_command - exxcutes a command with its arguments
  * @arg: array of character pointers containing the command and its arguments
  * Return: void
  */

void exec_command(char **arg)
{
	int st;
	pid_t pid;

	pid = fork();
	if (pid < 0)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}

	if (pid == 0)
	{
		/* child process */
		execvp(arg[0], arg);

		/* if execvp returns, an error occured */
		perror("execvp");
		exit(EXIT_FAILURE);
	}

	else
	{
		/* parent process */
		waitpid(pid, &st, 0);
		if (WIFEXITED(st))
			printf("child process exited with status %d\n", WEXITSTATUS(st));
		else
			printf("child process terminated abnormally\n");
	}
}

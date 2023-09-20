#include "shell.h"

/**
  * cd - change directory
  * @dir: directory to be changed
  */

void cd_cmd(const char *dir)
{
	char newDir[MAX_LEN];
	char *prevDir = getenv("OLDPWD");
	char *curDir = getcwd(NULL, 0);

	if (dir == NULL || strcmp(dir, "-") == 0)
	{
		if (prevDir == NULL)
		{
			fprintf(stderr, "OLDPWD not set.\n");
			return;
		}

		strcpy(newDir, prevDir);
	}

	else
	{
		strcpy(newDir, dir);
	}

	if (curDir == NULL)
	{
		perror("getcwd");
		return;
	}

	if (chdir(newDir) == -1)
	{
		perror("chdir");
		free(curDir);
		return;
	}

	setenv("OLDPWD", curDir, 1);
	free(curDir);
}

/**
  * test - entry point
  * @argc: argument count
  * @argv: argument vector
  * Return: 0 always
  */

int test(int argc, char *argv[])
{
	const char *home = getenv("HOME");

	if (argc == 1)
	{
		if (home == NULL)
		{
			fprintf(stderr, "HOME environment variable not set.\n");
			return (1);
		}
		cd_cmd(home);
	}

	else if (argc == 2)
	{
		cd_cmd(argv[1]);
	}
	else
	{
		fprintf(stderr, "Usage: %s [DIRECTORY]\n", argv[0]);
		return (1);
	}

	return (0);
}










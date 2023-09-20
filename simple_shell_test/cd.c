#include "shell.h"

/**
  * cd - change directory
  * @dir: directory to be changed
  */

void cd_cmd(const char *dir)
{
	char newDir[MAX_LEN];
	char *prevDir = getenv("OLDPWD");
	char *curDir = getcwd((NULL, 0);

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

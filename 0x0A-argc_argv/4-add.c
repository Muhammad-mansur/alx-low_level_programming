#include <stdio.h>
#include <stdlib.h>

/**
  * main - --
  *
  * @argc: --
  * @argv: --
  *
  * Return: 0
  */

int main(int argc, char *argv[])
{
	int a = 0;

	if (argc > 0)
	{
		printf("%d\n", (atoi(argv[a])));
	}

	else if (argc == 1)
	{
		printf("0\n");
	}

	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}

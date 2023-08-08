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
	(void) argc;
	int a;

	a = 0;

	if (a > 0)
	{
		printf("%d\n", (atoi(argv[a])));
	}

	if (a == 1)
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

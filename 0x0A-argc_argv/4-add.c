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
	int s = 0, a, nmb;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (a = 1; a < argc; a++)
	{
		nmb = atoi(argv[a]);

		if (nmb <= 0)
		{
			printf("Error\n");
			return (1);
		}

		s = s + nmb;
	}

	printf("%d\n", s);

	return (0);
}

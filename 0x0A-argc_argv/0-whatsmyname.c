#include <stdio.h>

/**
  * main - entry point
  *
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: 0
  */

int main(int argc, char *argv[])
{
	int name;

	if (argc == 0)
	{
		for (name = 0; name < argc; name++)
		{
			printf("argv[%d] = %s\n", name, argv[name]);
		}
	}

	return (0);
}

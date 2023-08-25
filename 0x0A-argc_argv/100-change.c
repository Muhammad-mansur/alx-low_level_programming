#include <stdio.h>
#include <stdlib.h>

/**
  * main - entry point
  * @argc: argument count
  * @argv: argument vector
  * Return: 0 if the number is negative
  */

int main(int argc, char *argv[])
{
	int cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
	}

	return (0);
}

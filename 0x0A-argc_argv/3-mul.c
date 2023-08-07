#include <stdio.h>
#include <stdlib.h>
/**
  * main - function that multiplies two numbers
  *
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: 0
  */

int main(int argc, char *argv[])
{
	int a, b;

	a = (atoi(argv[1]));
	b = (atoi(argv[2]));

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		printf("%d\n", a * b);
	}

	return (0);
}

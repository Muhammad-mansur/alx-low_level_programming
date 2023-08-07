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
	int a, b, c;

	a = (atoi(argv[1]));
	b = (atoi(argv[2]));
	c = a * b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		printf("%d\n", c);
	}

	return (0);
}

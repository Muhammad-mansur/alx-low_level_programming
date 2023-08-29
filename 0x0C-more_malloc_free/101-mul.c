#include "main.h"

/**
  * is_digit - function to check if command line argument is a number
  * or digit
  *
  * @p: pointer
  *
  * Return: 1
  */

int is_digit(char *p)
{
	int a;

	for (a = 0; p[a] != '\0'; a++)
	{
		if (p[a] < '0' || p[a] > '9')
		{
			printf("Error\n");
			exit(98);
		}
	}
	return (1);
}

/**
  * main - function to multiply two positive numbers
  *
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: 0
  */

int main(int argc, char *argv[])
{
	int num1, num2, mul;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (is_digit(argv[1]) == 0 || is_digit(argv[2]) == 0)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	mul = num1 * num2;
	printf("%d\n", mul);

	return (0);
}

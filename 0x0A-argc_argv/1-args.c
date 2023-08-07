#include <stdio.h>

/**
  * main - function name
  *
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: 0
  */

int main(int argc, char *argv[] __attribute__((unused)))
{
	int n;

	n = argc - 1;
	printf("%d\n", n);

	return (0);
}

#include "main.h"

/**
  * print_diagonal - function name
  *
  * @n: number of times character to be printed
  *
  * Return: nothing
  */

void print_diagonal(int n)
{
	int a;

	if (n <= 0)
	{
		_putchar('\n');
	}


	for (a = 0; a < n; a++)
	{
		_putchar(' ');
		_putchar(92);
		_putchar('\n');
	}

}

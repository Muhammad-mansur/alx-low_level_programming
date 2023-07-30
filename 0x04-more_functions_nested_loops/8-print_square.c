#include "main.h"

/**
  * print_square - function to print square
  *
  * @size: size of the square
  *
  * Return: nothing
  */

void print_square(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (a = 0; a < size; a++)
	{
		for (b = 0; b < (size - 1); b++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
}

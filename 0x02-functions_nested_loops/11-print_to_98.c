#include "main.h"

/**
  * print_to_98 - function name
  *
  * @n: number to be printed
  *
  * Return: void
  */

void print_to_98(int n)
{
	n = 0;

	for (n = 0; n <= 98; n++)
	{
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
}

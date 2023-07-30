#include "main.h"
#include <stdio.h>

/**
  * print_line - function name
  *
  * @n: number of line that gets printed
  *
  * Return: void
  */

void print_line(int n)
{
	for (; n > 0; n--)
	{
		putchar('_');
	}

	putchar('\n');
}

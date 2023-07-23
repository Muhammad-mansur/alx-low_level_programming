#include "main.h"

/**
  * times_table - function name
  *
  * Return: void
  */

void times_table(void)
{
	int row;
	int col;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			int mul = row * col;

			_putchar(mul / 10 + '0');
			_putchar(mul % 10 + '0');
			if (row < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	_putchar('\n');
	}
}

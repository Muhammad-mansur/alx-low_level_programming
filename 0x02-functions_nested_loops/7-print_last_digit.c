#include "main.h"

/**
  * print_last_digit - entry point
  *
  * @n: last digit to be printed
  *
  * Return: 0 (success)
  */

int print_last_digit(int n)
{
	int digit;

	digit = n % 10;
	if (digit < 0)
	{
		digit = digit * -1;
	}
	_putchar('0' + digit);
	return (digit);
}

#include "main.h"

/**
  * _sqrt_recursion - function that returns the natural square
  * root of a number.
  *
  * @n: number
  *
  * Return: 0
  */

int _check(int n, int x)
{
	x = (x + n / x) / 2;

	return _check(n, x);
}

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return _check(n, x);
}

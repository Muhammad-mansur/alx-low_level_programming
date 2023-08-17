#include "variadic_functions.h"

/**
  * sum_them_all - A function that returns the sum of
  * all its parameters
  * @n: parameter
  * Return: ---
  */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int a, result = 0;
	va_list arg;

	if (n == 0)
	{
		return (0);
	}

	va_start(arg, n);

	for (a = 0; a < n; a++)
	{
		result += va_arg(arg, int);
	}

	va_end(arg);

	return (result);
}

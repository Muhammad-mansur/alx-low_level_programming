#include "variadic_functions.h"

/**
  * print_numbers - A function that prints numbers
  * @separator: is the string to be printed between numbers
  * @n: is the number of integers passed to the function
  * Return: void
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a, num;
	va_list arg;

	if (separator == NULL)
	{
		return;
	}

	va_start(arg, n);

	for (a = 0; a < n; a++)
	{
		num = va_arg(arg, int);
		printf("%d", num);

		if (separator != NULL && a < (n - 1))
		{
			printf("%s", separator);
		}
	}

	printf("\n");
}

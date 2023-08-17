#include "variadic_functions.h"

/**
  * print_strings - A function that prints strings
  *
  * @separator: the string to be printed between the strings
  * @n: the number of strings passed to the function
  *
  * Return: nothing
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int a;
	char *string;

	va_start(arg, n);

	for (a = 0; a < n; a++)
	{
		string = va_arg(arg, char *);

		if (string != NULL)
		{
			printf("%s", string);
		}

		else
		{
			printf("(nil)");
		}

		if (separator != NULL && a < (n - 1))
		{
			printf("%s", separator);
		}
	}
	va_end(arg);
	printf("\n");
}

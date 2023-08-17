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
		printf("%d", va_arg(arg, int));

		if (separator != NULL && string != '\0')
		{
			printf("%d", n);
			printf(",");
			printf("%s", separator);
		}

		if (string == NULL)
		{
			printf("(nil)");
		}
	}
	printf("\n");
}

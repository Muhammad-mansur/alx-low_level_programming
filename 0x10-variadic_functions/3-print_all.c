#include "variadic_functions.h"

/**
  * print_all - A function that prints anything
  *
  * @format: list of types of arguments passed to the function
  *
  * Return: nothing
  */

void print_all(const char * const format, ...)
{
	va_list arg;
	char *s;
	int i;

	va_start(arg, format);

	while (format && format[i])
	{
		if (format[i] == 'c')
		{
			printf("%c", va_arg(arg, int));
			printf(", ");
		}

		else if (format[i] == 'i')
		{
			printf("%d", va_arg(arg, int));
			printf(", ");
		}

		else if (format[i] == 'f')
		{
			printf("%f", va_arg(arg, double));
			printf(", ");
		}

		else if (format[i] == 's')
		{
			s = va_arg(arg, char *);
			if (s == NULL)
			{
				printf("(nil)");
				printf(", ");
			}
		}
		i++;
	}

}

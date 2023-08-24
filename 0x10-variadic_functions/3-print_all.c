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
	int i = 0;

	va_start(arg, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(arg, int));
				break;
			case 'i':
				printf("%d", va_arg(arg, int));
				break;
			case 'f':
				printf("%f", va_arg(arg, double));
				break;
			case 's':
				s = va_arg(arg, char *);
				if (s == NULL)
				{
					s = "(nil)";
				}
				printf("%s", s);
				break;
			default:
				continue;
		}
		
		if (format[i + 1])
		{
			printf(", ");
		}

		i++;
	}

	printf("\n");

	va_end(arg);

}
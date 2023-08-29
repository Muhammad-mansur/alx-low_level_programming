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
	char *s, *sep = "";
	int a = 0;

	va_start(arg, format);

	while (format && format[a])
	{
		switch (format[a])
		{
			case 'c':
				printf("%s%c", sep, va_arg(arg, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(arg, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(arg, double));
				break;
			case 's':
				{
					s = va_arg(arg, char *);
					if (s == NULL)
					{
						printf("%s(nil)", sep);
					}
					else
					{
						printf("%s%s", sep, s);
					}
				}
				break;
			default:
				break;
		}
		sep = ", ";
		a++;
	}
	va_end(arg);
	printf("\n");
}

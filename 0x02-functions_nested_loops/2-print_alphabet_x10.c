#include "main.h"

/**
  * print_alphabet_x10 - entry point
  *
  * Description: A function that prints 10 times
  * the alphabet in lower case.
  *
  * Return: void
  */

void print_alphabet_x10(void)
{
	char alpha = 'a';
	int i = '0';

	for (i = '0'; i < '9'; i++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}

}

#include "main.h"

/**
  * print_alphabet - entry point
  *
  * Description: A program that prints the alphabet,
  * in lower case.
  *
  * Return: void
  */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	_putchar(alpha);
	_putchar('\n');
}

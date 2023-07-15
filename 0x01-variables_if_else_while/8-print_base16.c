#include<stdio.h>

/**
  * main - my entry point
  *
  * Description: A program that prints all the
  * numbers of base 16 in lower case.
  *
  * Return: 0 (success)
  */

int main(void)
{
	char alpha;

	for (alpha = '0'; alpha <= '9'; alpha++)
	{
		putchar(alpha);
	}

	for (alpha = 'a'; alpha <= 'f'; alpha++)
	{
		putchar(alpha);
	}

	putchar('\n');

	return (0);
}

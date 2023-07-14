#include<stdio.h>

/**
  * main - A program that prints alphabet
  * in lower case, and then in upper case.
  *
  * Return: Always zero (Success)
  */

int main(void)
{
	char alpha;

	/* to lower case */
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}

	/* to upper case */
	for (alpha = 'A'; alpha <= 'Z'; alpha++)
	{
		putchar(alpha);
	}

	putchar('\n');
	return (0);
}

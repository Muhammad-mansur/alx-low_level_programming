#include<stdio.h>

/**
  * main - my entry point
  *
  * Description: A program that prints the lower case
  * alphabet in reverse.
  *
  * Return: 0 (Success)
  */

int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	}

	putchar('\n');

	return (0);
}

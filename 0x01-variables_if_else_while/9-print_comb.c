#include<stdio.h>

/**
  * main - my entry point
  *
  * Description: A program that prints all possible
  * combinations of single-digit numbers.
  *
  * Return: 0 (success)
  */

int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		putchar(a + '0');
		if (a != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	return (0);
}

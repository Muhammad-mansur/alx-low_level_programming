#include<stdio.h>

/**
  * main - my entry point
  *
  * Description: A program that prints all posible different
  * combinations of three digits.
  *
  * Return: 0 (success)
  */

int main(void)
{
	int a, b, c;

	for (a = '0'; a <= '7'; a++)
	{
		for (b = a + 1; b <= '8'; b++)
		{
			for (c = a + 2; c <= '9'; c++)
			{
				putchar(a);
				putchar(b);
				putchar(c);
				if (a != '7' || b != '8' || c != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}

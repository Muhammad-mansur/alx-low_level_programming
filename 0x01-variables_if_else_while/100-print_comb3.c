#include<stdio.h>

/**
  * main - my main entry point
  *
  * Description: A program that prints all possible different
  * combination of two digits.
  *
  * Return: 0 (success)
  */

int main(void)
{
	int a;
	int b;

	for (a = '0'; a <= '8'; a++)
	{
		for (b = a + 1; b <= '9'; b++)
		{
			putchar(a);
			putchar(b);
			if (a != '8' || b != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}

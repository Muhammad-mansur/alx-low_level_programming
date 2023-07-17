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

	a = '0';
	b = '0';

	for (a = '9'; a <= '9'; a++)
	{
		for (b = '9'; b <= '9'; b++)
		{

			if (a < b || a == b);
			{
				putchar(a);
				putchar(b);
				if (a == '8' && b == '9')
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	return (0);
}

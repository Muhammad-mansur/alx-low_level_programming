#include<stdio.h>

/**
  * main - my entry point
  *
  * Description: A program that prints all single
  * digit numbers of base 10 starting from 0
  * without using char variable type and only allowed
  * to use putchar function (printf, puts, etc...) is forbidden.
  *
  * Return: 0 (Success)
  */

int main(void)
{
	int asciiValue;

	for (asciiValue = 48; asciiValue <= 57; asciiValue++)
	{
		putchar(asciiValue);
	}

	putchar('\n');
	return (0);
}

#include<stdio.h>

/**
  * main - A program to print alphabet in lower case
  *
  * Return: always zero (success)
  */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);
	return (0);
}

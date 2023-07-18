#include<stdio.h>
#include<unistd.h>

/**
  * main - entry point
  *
  * Descriptin: A program that prints _putchar
  *
  * Return: 0 (success)
  */

int main(void)
{
	write(1, "_putchar", 8);

	putchar('\n');
	return (0);
}

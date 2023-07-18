#include<unistd.h>

/**
  * main - entry point
  *
  * Description: A program that prints putchar
  *
  * Return: 0 (success)
  */

int main(void)
{
	write(1, "_putchar\n", 9);

	return (0);
}

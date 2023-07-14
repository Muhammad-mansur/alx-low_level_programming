#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
  * main - A program to understand how to use
  * operators
  *
  * Return: 0 (Success)
  */

int main(void)
{
	int n, lastDigit;

	lastDigit = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is ", n);
	if (n > 5)
	{
		printf("%d and is greater than 5", lastDigit);
	}
	else if (n == 0)
	{
		printf("%d and is 0", lastDigit);
	}
	else if (n < 6 && n != 0)
	{
		printf("%d and is less than 6 and not 0", lastDigit);
	}
	return (0);
}

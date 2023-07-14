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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;

	printf("Last digit of %d is %d ", n, lastDigit);
	if (lastDigit > 5)
	{
		printf("and is greater than 5");
	}
	else if (lastDigit == 0)
	{
		printf("and is 0");
	}
	else if (lastDigit < 6 && lastDigit != 0)
	{
		printf("and is less than 6 and not 0");
	}
	return (0);
}

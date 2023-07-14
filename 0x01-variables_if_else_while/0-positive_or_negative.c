#include<stdio.h>
#include <time.h>
/* more headers goes there */

/**
  * main - A program to print whether number
  * stored in a variable is positive or negative
  *
  * Return: 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Random number: %d\n", n);

	if (n > 0)
	{
		printf("is positive");
	}
	else if (n < 0)
	{
		printf("is negative");
	}
	else
	{
		printf("is zero");
	return (0);
}

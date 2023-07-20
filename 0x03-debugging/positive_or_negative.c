#include<stdio.h>
#include<stdlib.h>
#include <time.h>
/* more headers goes there */

/**
  * positive_or_negative - A program to print whether number
  * @i: integer
  * stored in a variable is positive or negative
  *
 */

void positive_or_negative(int i)
{
	srand(time(0));
	i = rand() - RAND_MAX / 2;

	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else
	{
		printf("%d is zero\n", i);
	}
}

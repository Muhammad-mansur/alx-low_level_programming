#include "main.h"

/**
  * jack_bauer - main prototype
  *
  * Description: A function that prints every minute of the day
  * starting from 00:00 to 23:59
  *
  * Return: void
  */

void jack_bauer(void)
{
	int hour, minutes;

	for (hour = 0; hour <= 23; hour++)
	{
		for (minutes = 0; minutes <= 59; minutes++)
		{
			_putchar ((hour / 10) + '0');
			_putchar ((hour % 10) + '0');
			_putchar (':');
			_putchar ((minutes / 10) + '0');
			_putchar ((minutes % 10) + '0');
			_putchar ('\n');
		}
	}
}

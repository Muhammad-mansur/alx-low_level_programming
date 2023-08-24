#include "lists.h"

void f(void) __attribute__ ((constructor));

/**
  * f - entry point
  * Return: nothing
  */

void f(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

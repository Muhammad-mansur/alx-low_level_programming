#include "dog.h"

/**
  * print_dog - function
  * @d: dog's location info
  * Return: 0
  */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	if (d->name == NULL)
	{
		printf("Name: %s(nil)\n", d->name);
	}

	if (d->owner == NULL)
	{
		printf("Owner: %s(nil)\n", d->owner);
	}
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}

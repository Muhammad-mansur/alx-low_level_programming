#include "dog.h"

/**
  */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	if (d->name == NULL || d->age == NULL || d->owner == NULL)
	{
		printf("nil");
	}
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %s\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}

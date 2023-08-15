#include "dog.h"

/**
  * free_dog - A function that frees dogs
  * @d: dog
  * Return: nothing
  */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
	}
}

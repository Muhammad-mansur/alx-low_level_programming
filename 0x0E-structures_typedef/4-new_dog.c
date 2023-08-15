#include "dog.h"

/**
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	/* Memory allocation */
	dog_t *dog = (dog_t *)malloc(sizeof(dog_t));

	/* Return NULL if mem allocation fails */
	if (dog == NULL)
	{
		return (NULL);
	}

	/* Store a copy of name and owner */
	strcpy(dog->name, name);
	strcpy(dog->owner, owner);

	if (name == NULL)
	{
		free(dog);
		return (NULL);
	}

	if (owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->age = age;

	return (dog);
}

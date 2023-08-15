#include "dog.h"

/**
  * new_dog - Function that creates a new dog
  * @name: new dog name
  * @age: new dog age
  * @owner: new dog owner's name
  * Return: new dog
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	/* Memory allocation */
	dog_t *dog = (dog_t *)malloc(sizeof(dog_t));

	/* Return NULL if memory allocation fails */
	if (dog == NULL)
	{
		return (NULL);
	}

	/* Memory allocation for dog name */
	dog->name = malloc(strlen(name) + 1);
	if (name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->age = age;

	/* Memory allocation for dog owner */
	dog->owner = malloc(strlen(owner) + 1);
	if (owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	/* Store a copy of name and owner */
	strcpy(dog->name, name);
	strcpy(dog->owner, owner);

	return (dog);
}

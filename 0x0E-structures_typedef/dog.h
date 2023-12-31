#ifndef main_h
#define main_h

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
  * struct dog - structure that contains dog list
  * @name: dog name
  * @age: dog age
  * @owner: dog owner name
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

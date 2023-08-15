#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Makes an initialization of struct dog
 * @d: Is Struct pointer
 * @name: The name pointer of dog
 * @age: Age pointer of dog
 * @owner: Owner pointer for dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	else
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}


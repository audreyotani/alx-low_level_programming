#include "dog.h"
#include <stdio.h>

/**
 * init_dog - prototype to initialize structure
 * @d: structure type
 * @age: float
 * @name: character
 * @owner: character
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

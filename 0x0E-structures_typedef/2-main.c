#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable
 * @d: pointer to struct dog to initialize
 * @name: args form struct
 * @age: args from struct
 * @owner: args from struct
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}

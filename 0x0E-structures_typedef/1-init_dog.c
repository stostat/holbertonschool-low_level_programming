#include "dog.h"

/**
 * init_dog -  struct dog
 * @d: char
 * @name: char name
 * @age: char age
 * @owner: char owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;

}

#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - lets the dogs out.
 * @d: pointer.
 */
void free_dog(dog_t *d)
{
	if (!d)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}

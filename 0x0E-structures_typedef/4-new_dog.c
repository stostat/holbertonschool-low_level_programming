#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * new_dog - creates new dog
  * @name: char
  * @age: float
  * @owner: char
  * Return: struct
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	char *mallname, *mallowner;
	int i, j, k, l;

	for (i = 0; name[i]; i++)
		;
	for (j = 0; owner[j]; j++)
		;
	mallname = malloc(i + 1);
	if (mallname == NULL)
		return (NULL);

	mallowner = malloc(j + 1);
	if (mallowner == NULL)
	{
		free(mallname);
		return (NULL);
	}

	for (k = 0; k <= i; k++)
		mallname[k] = name[k];

	for (l = 0; l <= j; l++)
		mallowner[l] = owner[l];

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
	{
		free(mallname);
		free(mallowner);
		return (NULL);
	}

	ptr->name = mallname;
	ptr->age = age;
	ptr->owner = mallowner;
	return (ptr);
}

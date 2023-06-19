#include"dog.h"
#include<stdlib.h>
#include<stdio.h>
/**
 * free_dog - frees the space taken by the dogs
 * @d: is a pointer that initializes the structure
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free my dog.
 * @d: dog init.
 * Return: void to the main.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}

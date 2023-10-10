#include "dog.h"

/**
 * init_dog - dog initialization.
 * @d: dog in invocation.
 * @name: dog name.
 * @age: dog age.
 * @owner: dog owner.
 *
 * Return: void to the main.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

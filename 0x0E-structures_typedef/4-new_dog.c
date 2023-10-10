#include "dog.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - count string length.
 * @str: character pointer.
 * Return: length.
 */
int _strlen(const char *str)
{
	int len = strlen(str);

	return (len);
}

/**
 * _strcpy - copy string.
 * @dest: destination.
 * @src: source files.
 * Return: dest.
 */
char *_strcpy(char *dest, char *src)
{
	dest = strcpy(dest, src);
	return (dest);
}

/**
 * new_dog - create new dog info.
 * @name: dog name.
 * @age: dog age.
 * @owner: dog owner.
 * Return: pointer.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);
	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->name = _strcpy(dog->name, name);
	dog->age = name;
	dog->owner = strcpy(dog->owner, owner);
	return (dog);
}

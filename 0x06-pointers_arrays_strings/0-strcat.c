#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcat - concatenate the string
 *@dest: store first string.
 *@src: store second string.
 * Return: Pointer
 */
char *_strcat(char *dest, char *src)
{
	char *myResults = strcat(dest, src);

	return (myResults);
}

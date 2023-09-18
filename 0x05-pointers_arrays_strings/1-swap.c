#include "main.h"
#include <stdio.h>

/**
 * swap_int - check and swap interger values.
 *@a: Hold interger value.
 *@b: Hold inter value.
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	*b = *a + *b;
	*a = *b - *a;
	*b = *b - *a;
}

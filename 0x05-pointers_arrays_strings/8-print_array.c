#include "main.h"

/**
 * print_array - loop and print array elements
 *@a: array address.
 *@n: number of arrays
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}

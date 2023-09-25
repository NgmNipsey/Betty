#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - sum of two diagonols.
 * @a: pointer.
 * @size: size of diagonal;
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0, i;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		sum2 += a[size - i - 1];
		a += size;
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}

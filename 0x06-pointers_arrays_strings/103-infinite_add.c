#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * infinite_add - add two numbers.
 * @n1: number
 * @n2: number
 * @r: results.
 * @size_r: size.
 * Return: Pointer.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int ln1 = strlen(n1);
	int ln2 = strlen(n2);
	int lnr = (size_r - 1);

	int i = 0;
	int sum;

	r[lnr] = '\0';
	lnr--;
	while (ln1 > 0 || ln2 > 0 || lnr >= 0)
	{
		sum = i;
		if (ln1 > 0)
		{
			sum += n1[ln1 - 1] - '0';
			ln1--;
		}
		if (ln2 > 0)
		{
			sum += n2[ln2 - 1] - '0';
			ln2--;
		}
		if (lnr < 0)
		{
			return (0);
		}
		r[lnr] = (sum % 10) + '0';
		i = sum / 10;
		lnr--;
	}
	return (r);
}

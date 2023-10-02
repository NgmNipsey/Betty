#include "main.h"
#include <stdio.h>

/**
 *_atoi - check the code
 *@s: Char value
 * Return: an integer.
 */
int _atoi(char *s)
{
	unsigned int counter = 0, mysize = 0, ic = 0, png = 1, m = 1, i;

	while (*(s + counter) != '\0')
	{
		if (mysize > 0 && (*(s + counter) < '0' || *(s + counter) > '9'))
			break;

		if (*(s + counter) == '-')
			png *= -1;

		if ((*(s + counter) >= '0') && (*(s + counter) <= '9'))
		{
			if (mysize > 0)
				m *= 10;
			mysize++;
		}
		counter++;
	}

	for (i = counter - mysize; i < counter; i++)
	{
		ic = ic + ((*(s + i) - 48) * m);
		m /= 10;
	}
	return (ic * png);
}

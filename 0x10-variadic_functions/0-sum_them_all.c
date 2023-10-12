#include "variadic_functions.h"

/**
 * sum_them_all - Sum three arguments.
 * @n: Number of arguments.
 *
 * Return: an integer.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int sum = 0;

	va_list ag;

	va_start(ag, n);

	while (i < n)
	{
		sum += va_arg(ag, int);
		i++;
		va_end(ag);
	}
	return (sum);
}

#include "variadic_functions.h"

/**
 * print_numbers - print given numbers in the arguments.
 * @separator: string to separate arguments.
 * @n: number of argument given.
 *
 * Return: void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ag;

	va_start(ag, n);
	while (i < n)
	{
		if (!separator)
			printf("%d", va_arg(ag, int));
		else if (separator && i == 0)
			printf("%d", va_arg(ag, int));
		else
			printf("%s%d", separator, va_arg(ag, int));
		i++;
	}
	va_end(ag);
	printf("\n");
}

#include "variadic_functions.h"

/**
 * print_strings - print string passed as argument.
 * @separator: character string.
 * @n: number of argument passed.
 *
 * Return: void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int j;
	char *s;

	va_list ag;

	va_start(ag, n);

	for (j = 0; j < n; j++)
	{
		s = va_arg(ag, char *);
		if (!s)
			s = "(nil)";
		if (!separator)
			printf("%s", s);
		else if (separator && j == 0)
			printf("%s", s);
		else
			printf("%s%s", separator, s);
	}
	printf("\n");
	va_end(ag);
}

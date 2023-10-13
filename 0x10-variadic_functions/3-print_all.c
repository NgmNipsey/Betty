#include "variadic_functions.h"

/**
 * print_all - print anything passed as argument.
 * @format: format string.
 *
 * Return: void.
 */
void print_all(const char * const format, ...)
{
	int j = 0;
	char *s, *sp = "";
	va_list ag;

	va_start(ag, format);

	if (format)
	{
		while (format[j])
		{
			switch (format[j])
			{
				case 'c':
					printf("%s%c", sp, va_arg(ag, int));
					break;
				case'i':
					printf("%s%d", sp, va_arg(ag, int));
					break;
				case 'f':
					printf("%s%f", sp, va_arg(ag, double));
					break;
				case 's':
					s = va_arg(ag, char *);
					if (!s)
						s = "nil";
					printf("%s%s", sp, s);
					break;
				default:
					j++;
					continue;
			}
			sp = ", ";
			j++;
		}
	}
	printf("\n");
	va_end(ag);
}

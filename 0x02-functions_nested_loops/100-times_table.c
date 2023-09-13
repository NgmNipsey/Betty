#include "main.h"

/**
 * print_times_table - Prints the times table
 *                     starting with 0.
 * @n: The value of the times table
 */
void print_times_table(int n)
{
	int number, mul, results;

	if (n >= 0 && n <= 15)
	{
		for (number = 0; number <= n; number++)
		{
			_putchar('0');

			for (mul = 1; mul <= n; mul++)
			{
				_putchar(',');
				_putchar(' ');

				results = number * mul;

				if (results <= 99)
					_putchar(' ');
				if (results <= 9)
					_putchar(' ');

				if (results >= 100)
				{
					_putchar((results / 100) + '0');
					_putchar(((results / 10)) % 10 + '0');
				}
				else if (results <= 99 && results >= 10)
				{
					_putchar((results / 10) + '0');
				}
				_putchar((results % 10) + '0');
			}
			_putchar('\n');
		}
	}
}

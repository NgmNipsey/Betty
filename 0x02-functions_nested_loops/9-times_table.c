#include "main.h"

/**
 * times_table - timetable from 0 to 9
 * Return: Always 0.
 */
void times_table(void)
{
	int start, end, results;

	for (start = 0; start <= 9; start++)
	{
		for (end = 0; end <= 9; end++)
		{
			results = (start * end);
			if (end != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (results >= 10)
			{
				_putchar((results / 10) + '0');
				_putchar((results % 10) + '0');
			}
			else if (results < 10 && end != 0)
			{
				_putchar(' ');
				_putchar((results % 10) + '0');
			}
			else
				_putchar((results % 10) + '0');
		}
		_putchar('\n');
	}
}

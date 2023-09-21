#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_buffer - print buffer.
 * @b: char
 * @size: size.
 * Return: always 0.
 */
void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		for (j = i; j < i + 10; j++)
		{
			if (j < size)
				printf("%02x ", b[j]);
			else
				printf(" ");
		}
		for (j = i; j < i + 10; j++)
		{
			if (j < size && isprint(b[j]))
				printf("%c", b[j]);
			else
				printf(".");
		}
		printf("\n");
	}
}

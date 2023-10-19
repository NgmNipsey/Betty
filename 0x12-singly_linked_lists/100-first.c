#include <stdio.h>

void __attribute__((constructor)) ngm(void);

/**
 * ngm - print string before main is excuted.
 *
 * Return: void.
 */
void ngm(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}

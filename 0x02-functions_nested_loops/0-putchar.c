#include <stdio.h>
#include <string.h>

/**
 * main - Print _putchar
 * Return: 0
 */
int main(void)
{
	char message[] = "_putchar";
	int i = 0;

	while (message[i])
	{
		putchar(message[i]);
		i++;
	}
	putchar('\n');
	return (0);
}

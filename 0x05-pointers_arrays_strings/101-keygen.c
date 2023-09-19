#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Check valid pasword.
 * Return: Always 0.
 */
int main(void)
{
	int ckecksum = 2772, n;

	srand(time(0));
	while (checksum)
	{
		n = rand() % 100;
		if (n <= 94)
			n += 32;
		else
			continue;
		if (checksum - n == 0)
		{
			checksum -= n;
			printf("%c", n);
		}
		else if (checksum - n - 32 > 0)
		{
			checksum -= n;
			printf("%c", n);
		}
	}
	return (0);
}

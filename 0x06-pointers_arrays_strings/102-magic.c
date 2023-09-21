#include <stdio.h>

int main(void)
{
	int i;
	int a[10];
	int *p;

	a[2] = 122;
	p = &i;

	/**
	 *You are not allowed to use a.
	 *You can only write one statement.
	 *You are not allowed to use ,
	 *You are not allowed to code.
	 */

	*(p + 10) = 98;
	/* it prints 98 with new line */
	printf("a[2] %d\n", a[2]);
	return (0);
}

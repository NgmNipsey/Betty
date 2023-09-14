#include <stdio.h>
#include <math.h>

/**
 * main - largest prime factor
 * Return: Always 0
 */
int main(void)
{
	long num = 612852475143;
int lim;

while (lim++ < num / 2)
{
if (num % lim == 0)
{
num /= 2;
continue;
}

for (lim = 3; lim < num / 2; lim += 2)
{
if (num % lim == 0)
num /= lim;

}
}
printf("%ld\n", num);
return (0);
}

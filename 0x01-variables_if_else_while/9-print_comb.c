#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always returns 0 (success)
 */
int main(void)
{
	int n;

	n = '0';

	while (n < '9')
	{
		putchar(n);
		putchar(',');
		putchar(' ');
		n++;
	}
	putchar('9');
	putchar('\n');

	return (0);
}

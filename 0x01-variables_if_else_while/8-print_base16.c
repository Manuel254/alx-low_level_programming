#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always returns 0 (success)
 */
int main(void)
{
	int n;
	int c;

	n = '0';
	c = 'a';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}

	while (c <= 'f')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}

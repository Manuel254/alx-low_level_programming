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

	while (n <= '9')
	{
		if (n != '0')
		{
			putchar(',');
			putchar(' ');
		}

		putchar(n);
		n++;

	}

	putchar('\n');

	return (0);
}

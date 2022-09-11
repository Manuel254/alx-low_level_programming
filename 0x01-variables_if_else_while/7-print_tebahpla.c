#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always returns 0 (success)
 */
int main(void)
{
	int a;

	a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a--;
	}

	putchar('\n');

	return (0);
}

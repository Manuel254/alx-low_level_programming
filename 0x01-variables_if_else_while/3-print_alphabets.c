#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always returns 0 (Success)
 */
int main(void)
{
	int lower;
	int upper;

	lower = 'a';
	upper = 'A';

	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}

	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}

	putchar('\n');

	return (0);
}

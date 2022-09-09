#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always returns 0
 */
int main(void)
{
	char letter;

	letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}

#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always returns 0 (success)
 */
int main(void)
{
	int letter;

	letter = 'a';

	while (letter <= 'z')
	{
		if (letter == 'e' || letter == 'q')
		{
			letter++;
			continue;
		}

		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}


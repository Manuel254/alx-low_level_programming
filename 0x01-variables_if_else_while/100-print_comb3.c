#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, num, den;

	i = 1;
	while (i < 90)
	{
		num = i / 10;
		den = i % 10;
		
		if (num < den)
		{
			putchar(num + '0');
			putchar(den + '0');

			if (num == 8 && den == 9)
			{
				putchar('\n');
			}
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	return (0);
}

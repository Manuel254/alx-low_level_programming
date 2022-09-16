#include "main.h"

/**
 * print_most_numbers - print numbers except 2 and 4
 */
void print_most_numbers(void)
{
	int i = 48;

	while (i <= 57)
	{
		if (i == 50 || i == 52)
		{
			i++;
			continue;
		}

		_putchar(i);
		i++;
	}
	_putchar('\n');
}

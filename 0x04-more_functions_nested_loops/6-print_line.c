#include "main.h"

/**
 * print_line - draws a straight line with n length
 * @n: number of times to draw the line
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
			break;
		}

		_putchar('_');
	}
	_putchar('\n');
}



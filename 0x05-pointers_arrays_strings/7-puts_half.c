#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * puts_half - prints half of a string
 * @str: Pointer to first character of string
 */
void puts_half(char *str)
{
	int n;
	int i = 0;

	n = strlen(str);
	if (n % 2 == 0)
	{
		str += (n / 2);
	}
	else
	{
		str += ((n - 1) / 2);
	}

	while (i < n)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

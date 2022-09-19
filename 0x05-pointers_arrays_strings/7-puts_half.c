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

	n = strlen(str);
	if (n % 2 == 0)
	{
		str += (n / 2);
	}
	else
	{
		str += ((n - 1) / 2);
	}

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

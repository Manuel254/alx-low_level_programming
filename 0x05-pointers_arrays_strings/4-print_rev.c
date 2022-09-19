#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: Address of first character of string
 */
void print_rev(char *s)
{
	char *temp;

	temp = s;
	while (*s != '\0')
	{
		++s;
	}

	while (temp <= s)
	{
		--s;
		_putchar(*s);
	}
	_putchar('\n');
}

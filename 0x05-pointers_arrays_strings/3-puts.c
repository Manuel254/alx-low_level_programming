#include "main.h"

/**
 * _puts - prints out a string
 * @str: pointer to address of first character of string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

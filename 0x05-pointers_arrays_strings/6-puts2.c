#include "main.h"

/**
 * puts2 - prints character by skipping next
 * @str: Pointer to string
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}

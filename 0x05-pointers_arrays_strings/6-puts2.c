#include "main.h"
#include "string.h"

/**
 * puts2 - prints character by skipping next
 * @str: Pointer to string
 */
void puts2(char *str)
{
	int i = 0;
	int n = strlen(str);

	while (i < n)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}

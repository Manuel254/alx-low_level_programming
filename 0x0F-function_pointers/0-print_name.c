#include <stdlib.h>

/**
 * print_name - prints a name to screen
 * @name: name to be printed
 * @f: function that prints name
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return (NULL);
	f(name);
}

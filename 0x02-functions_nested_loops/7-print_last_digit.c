#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @d: A number
 *
 * Return: Always 0.
 */
int print_last_digit(int d)
{
	int result;
	
	if (d < 0)
	{
		d = -(d);	
	}

	result = d % 10;
	_putchar(result + '0');

	return (result);
}

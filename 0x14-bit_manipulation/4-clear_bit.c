#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at given index
 * @n: number to be changed
 * @index: index of bit you want to set
 *
 * Return: 1 else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	*n = *n & (~(1 << index));

	if (n)
		return (1);
	else
		return (-1);
}

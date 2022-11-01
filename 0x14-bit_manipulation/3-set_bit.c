#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to a number
 * @index: index of bit to be set
 *
 * Return: 1 else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	*n = *n | (1 << index);

	if (n == NULL)
		return (-1);
	return (1);
}

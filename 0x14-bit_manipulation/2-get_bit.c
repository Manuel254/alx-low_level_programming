#include "main.h"

/**
 * get_bit - gets bit at a specific index
 * @n: number
 * @index: position of bit
 *
 * Return: value of bit at index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if ((n & (1 << index)) == 0)
		return (0);
	else if ((n & (1 << index)) != 0)
		return (1);
	else
		return (-1);
}

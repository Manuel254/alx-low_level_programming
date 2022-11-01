#include "main.h"

/**
 * flip_bits - counts number of bits to be flipped
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count, num;

	count = 0;
	num = n ^ m;

	while (num > 0)
	{
		count++;
		num &= (num - 1);
	}
	return (count);
}

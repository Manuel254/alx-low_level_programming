#include "main.h"

/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: string containing 0 and 1 characters
 *
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal, weight, len;

	decimal = 0;
	weight = 1;

	if (b == NULL)
		return (0);

	len = strlen(b);
	while (len)
	{
		if (b[len - 1] == '1')
			decimal += weight;

		if (b[len - 1] != '0' && b[len - 1] != '1')
			return (0);
		weight *= 2;
		len--;
	}
	return (decimal);
}

#include "main.h"

/**
 * valid_bin - checks whether a string is valid binary
 * @str: string to be checked
 *
 * Return: valid binary string or NULL
 */
unsigned int valid_bin(const char *str)
{
	int len, i;

	len = strlen(str);

	if (str == NULL)
		return (0);

	for (i = 0; i < len; i++)
	{
		if (str[i] == '0' || str[i] == '1')
			continue;
		else
			return (0);
	}
	return (atoi(str));
}

/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: string containing 0 and 1 characters
 *
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal, weight, rem, bin;

	decimal = 0;
	weight = 1;
	bin = valid_bin(b);

	while (bin != 0)
	{
		rem = bin % 10;
		decimal += rem * weight;
		bin = bin / 10;
		weight *= 2;
	}
	return (decimal);
}

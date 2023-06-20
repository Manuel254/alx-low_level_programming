#include "main.h"

/**
 * get_endianness - checks the endianness of the underlying machine
 *
 * Return: 1 if Little Endian else 0 if Big Endian
 */
int get_endianness(void)
{
	int num = 1;
	char *p = (char*)&num;

	return ((int)*p);
}

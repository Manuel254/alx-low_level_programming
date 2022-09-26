#include <string.h>

/**
 * _memset - fills memory with a constatnt byte
 * @s: pointer to memory area
 * @b: character to be set
 * @n: number of memory bytes
 *
 * Return: pointer to memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}

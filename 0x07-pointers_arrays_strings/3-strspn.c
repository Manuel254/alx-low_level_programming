#include <string.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: substring
 *
 * Return: number of bytes of s that is found in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length;

	length = strspn(s, accept);
	return (length);
}

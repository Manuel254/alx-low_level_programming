#include <string.h>

/**
 * _strpbrk - searches for a string
 * @s: string
 * @accept: substring
 *
 * Return: pointer to string
 */
char *_strpbrk(char *s, char *accept)
{
	s = strpbrk(s, accept);
	return (s);
}

#include <string.h>

/**
 * _strchr - locates a character in string
 * @s: string
 * @c: character
 *
 * Return: Pointer to first occurrence of character
 */
char *_strchr(char *s, char c)
{
	s = strchr(s, (int) c);
	return (s);
}

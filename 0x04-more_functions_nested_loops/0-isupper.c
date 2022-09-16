#include "main.h"

/**
 * _isupper - checks whether a character is uppercase
 * @c: character to be checked
 *
 * Return: 1 if uppercase else 0
 */
int _isupper(char c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	return (0);
}

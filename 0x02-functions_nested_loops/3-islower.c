#include "main.h"

/**
 * _islower - checks whether a character c is in lowercase
 * @c: The character to check
 *
 * Return: 1 if c is lowercase else 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}

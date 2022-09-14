#include "main.h"

/**
 * _isalpha - checks whether character is alphabet
 * @c: character to be checked
 *
 * Return: 1 if true otherwise 0
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}

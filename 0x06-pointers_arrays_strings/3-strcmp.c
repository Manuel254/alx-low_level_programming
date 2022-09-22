#include <string.h>

/**
 * _strcmp - compares two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: A signed integer
 */
int _strcmp(char *s1, char *s2)
{
	int max, l1, l2, i, diff, result;

	result = 0;
	diff = 0;
	l1 = strlen(s1);
	l2 = strlen(s2);

	if (l1 > l2)
	{
		max = l1;
	}
	else
	{
		max = l2;
	}

	for (i = 0; i < max; i++)
	{
		diff = (int) s1[i] - (int) s2[i];
		if (diff != 0)
		{
			result += diff;
			break;
		}
		result += diff;
	}
	return (result);
}

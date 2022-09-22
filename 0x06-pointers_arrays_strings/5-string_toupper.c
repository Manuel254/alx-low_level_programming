#include <string.h>

/**
 * string_toupper - converts a string to upper
 * @s: string to be converted
 * Return: final string
 */
char *string_toupper(char *s)
{
	int len, i;

	len = strlen(s);
	for (i = 0; i < len; i++)
	{
		if (s[i] >= 65 && s[i] <= 90)
		{
			continue;
		}
		else
		{
			if (s[i] >= 97 && s[i] <= 122)
			{
				s[i] = s[i] - 32;
			}
			else
			{
				continue;
			}
		}
	}
	return (s);
}

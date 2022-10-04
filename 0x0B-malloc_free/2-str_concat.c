#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to concatenated string or NULL
 */
char *str_concat(char *s1, char *s2)
{
	unsigned long int i, len_s1, len_s2;
	char *ptr = NULL;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if ((s1 != NULL) || (s2 != NULL))
	{
		len_s1 = strlen(s1);
		len_s2 = strlen(s2);
		ptr = malloc(len_s1 + (len_s2 + 1));

		if (ptr == NULL)
			return (NULL);

		for (i = 0; i < len_s1; i++)
		{
			ptr[i] = s1[i];
		}

		for (i = 0; i <= len_s2; i++)
		{
			ptr[len_s1 + i] = s2[i];
		}
	}
	return (ptr);
}

#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes for s2
 *
 * Return: pointer to new string or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr = NULL;
	unsigned int i, len_s1, len_s2;

	len_s1 = strlen(s1);
	len_s2 = strlen(s2);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n >= len_s2)
		ptr = malloc(len_s1 + (len_s2 + 1));
	else
		ptr = malloc(len_s1 + (n + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len_s1; i++)
		ptr[i] = s1[i];

	if (n >= len_s2)
	{
		for (i = 0; i <= len_s2; i++)
			ptr[len_s1 + i] = s2[i];
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			if (i == n)
				ptr[len_s1 + n] = '\0';
			else
				ptr[len_s1 + i] = s2[i];
		}
	}
	return (ptr);
}

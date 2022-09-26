#include <string.h>

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 *
 * Return: pointer to beginning of substring
 */
char *_strstr(char *haystack, char *needle)
{
	haystack = strstr(haystack, needle);
	return (haystack);
}

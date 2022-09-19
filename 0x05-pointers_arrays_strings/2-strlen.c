/**
 * _strlen - calculates the length of a string
 * @s: string variable
 *
 * Returns: length of string
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len += 1;
		s++;
	}

	return (len);
}

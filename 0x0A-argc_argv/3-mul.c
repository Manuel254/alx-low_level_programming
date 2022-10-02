#include <stdio.h>
#include <stdlib.h>

/**
 * main - print result of multiplication
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if success else 1
 */
int main(int argc, char **argv)
{
	int result;

	if (argc == 3)
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");

		return (1);
	}
	return (0);
}

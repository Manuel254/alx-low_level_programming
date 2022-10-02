#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints addition of numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if success else 1
 */
int main(int argc, char **argv)
{
	int i, sum;

	sum = 0;
	if (argc >= 3)
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("%d\n", 0);
	}
	return (0);
}

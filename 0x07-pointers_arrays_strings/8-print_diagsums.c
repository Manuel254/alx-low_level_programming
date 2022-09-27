#include <stdio.h>

/**
 * print_diagsums - prints sum of two diagonals
 * @a: array of integers
 * @size: size of square matrix
 */
void print_diagsums(int *a, int size)
{
	int i, j, first_dig, sec_dig;

	i = first_dig = sec_dig = 0;
	j = (size - 1);

	while (i < (size * size))
	{
		first_dig += a[i];
		i = i + (size + 1);
	}

	while (j < ((size * size) -  1))
	{
		sec_dig += a[j];
		j = j + (size - 1);
	}
	printf("%d, %d\n", first_dig, sec_dig);
}

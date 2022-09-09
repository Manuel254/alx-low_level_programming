#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always return 0 (Success)
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last_digit = n % 10;

	if (last_digit > 5)
	{
		printf("Last digit of %d is ", n);
		printf("%d and is greater than 5\n", last_digit);
	}
	if (last_digit < 6)
	{
		printf("Last digit of %d is ", n);
		printf("%d and is less than 6\n", last_digit);
	}
	if (last_digit == 0)
	{
		printf("Last digit of %d is ", n);
		printf("%d and is 0\n", last_digit);
	}

	return (0);
}


#include <stdarg.h>

/**
 * sum_them_all - sums numbers
 * @n: fixed argument
 *
 * Return: sum of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list ag;

	va_start(ag, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ag, int);

	va_end(ag);
	return (sum);
}

/**
 * swap_int - swaps values of two variables
 * @a: First variable
 * @b: Second variable
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

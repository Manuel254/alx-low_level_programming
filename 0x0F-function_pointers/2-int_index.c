/**
 * int_index - searches for an integer
 * @array: Array to search element from
 * @cmp: pointer to a function used to compare values
 *
 * Return: index of first element which cmp does not return 0
 * else return -1
 */
int int_index(int *array, int size, int (*cmp)(int)){
	int i;

	if (size <= 0)
		return (0);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}

#include "lists.h"

/**
 * print_list - prints elements of a list
 * @h: pointer to structure list_t
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *ptr = h;

	while (ptr != NULL)
	{
		count++;
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", ptr->len, ptr->str);

		ptr = ptr->next;
	}
	return (count);
}

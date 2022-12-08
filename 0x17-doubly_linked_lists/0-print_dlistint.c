#include "lists.h"

/**
 * print_dlistint - prints all elements of a list
 * @h: pointer to the first node
 *
 * Return: number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t count = 0;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		count++;
		temp = temp->next;
	}
	return count;
}

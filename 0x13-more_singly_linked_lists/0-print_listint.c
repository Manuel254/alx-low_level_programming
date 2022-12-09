#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 * @h: pointer to first node
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp = h;
	size_t count = 0;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		count++;
		temp = temp->next;
	}

	return (count);
}

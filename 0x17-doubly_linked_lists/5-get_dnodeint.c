#include "lists.h"

/**
 * print_dlistint - prints all elements of a list
 * @h: pointer to the first node
 * @index: position of node
 *
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int i, count = 0;

	if (index == 0)
		return (temp);

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}

	if (index > count)
		return (NULL);

	temp = head;

	for (i = 0; i < index; i++)
		temp = temp->next;

	return (temp);
}

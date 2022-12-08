#include "lists.h"

/**
 * get_dnodeint_at_index - get nth node
 * @head: pointer to the first node
 * @index: position of node
 *
 * Return: address of nth node else NULL
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

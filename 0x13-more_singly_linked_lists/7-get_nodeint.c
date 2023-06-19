#include "lists.h"

/**
 * get_nodeint_at_index - return nth node of a linked list
 * @head: pointer to head node
 * @index: index of the node
 *
 * Return node else NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i;

	for (i = 0; i < index; i++)
		temp = temp->next;
	if (temp)
		return (temp);
	return (NULL);
}

#include "lists.h"

/**
 * insert a new node at a given position
 * @head: pointer to head node
 * @idx: index where new node should be added
 * @n: data for new node
 *
 * Return: address of new node else NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	while (idx != 1)
	{
		if (temp == NULL || temp->next == NULL)
			return (NULL);
		temp = temp->next;
		idx--;
	}

	newNode->next = temp->next;
	temp->next = newNode;

	return (newNode);
}

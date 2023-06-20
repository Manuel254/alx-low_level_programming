#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: pointer to head node
 * @index: index of node
 *
 * Return: 1 if success else -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev = *head;
	listint_t *curr = *head;

	if (*head == NULL)
		return (-1);
	else if (index == 0)
	{
		*head = curr->next;
		free(curr);
		curr = NULL;
	}
	else
	{
		while (index != 0)
		{
			if (curr->next == NULL)
				return (-1);
			prev = curr;
			curr = curr->next;
			index--;
		}
		prev->next = curr->next;
		free(curr);
		curr = NULL;
	}
	return (1);
}

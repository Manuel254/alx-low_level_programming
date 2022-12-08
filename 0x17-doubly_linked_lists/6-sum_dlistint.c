#include "lists.h"

/**
 * sum_dlistint - calculates sum of all data of list
 * @head: pointer to the first node
 *
 * Return: sum of data
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	if (head == NULL)
		return (sum);

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}

#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to head
 */
void free_list(list_t *head)
{
	while (head)
	{
		list_t *ptr = head;

		head = head->next;
		free(ptr);
	}
}

#include "lists.h"

/**
 * free_listint2 - a function to free a list_t list.
 *
 * @head: a pointer to the head of the list.
 *
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr, *d;

	if (head == NULL)
		return;

	ptr = *head;

	while (ptr)
	{
		d = ptr;
		ptr = ptr->next;
		free(d);
	}

	*head = NULL;
}

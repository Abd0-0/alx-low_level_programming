#include "lists.h"

/**
 * free_listint - a function to free a list_t list.
 *
 * @head: a pointer to the head of the list.
 *
 */

void free_listint(listint_t *head)
{
	listint_t *ptr, *d;

	ptr = head;

	while (ptr)
	{
		d = ptr;
		ptr = ptr->next;
		free(d);
	}
}

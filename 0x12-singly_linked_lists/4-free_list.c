#include "lists.h"

/**
 * free_list - a function to free a list_t list.
 *
 * @head: a pointer to the head of the list.
 *
 */

void free_list(list_t *head)
{
	list_t *ptr, *d;

	ptr = head;

	while (ptr)
	{
		d = ptr;
		ptr = ptr->next;
		free(d->str);
		free(d);
	}
}


#include "lists.h"

/**
 * free_listint_safe - a function to free a list_t list.
 *
 * @head: a pointer to the head of the list.
 *
 * Return: the size of the list that was free’d.
 *
 */

size_t free_listint_safe(listint_t **head)
{
	size_t count;
	listint_t *ptr, *d;

	if (head == NULL)
		return;

	ptr = *head;

	while (ptr)
	{
		d = ptr;
		ptr = ptr->next;
		free(d);
		count++;
	}

	*head = NULL;
}

#include "lists.h"

/**
 * pop_listint - a function that deletes the head node.
 *
 * @head: a pointer to the head pointer(passed by reference).
 *
 * Return: the head node’s data (n).
 *
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *ptr;

	if (*head == NULL)
		return (0);

	ptr = *head;
	*head = ptr->next;
	n = ptr->n;
	free(ptr);

	return (n);
}

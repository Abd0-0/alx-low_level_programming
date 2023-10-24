#include "lists.h"


/**
 * add_nodeint_end - adds a new node at the end of a list_t list.
 *
 * @head: pointer to the head of the list.
 * @n: the integer.
 *
 * Return: the address of the new element, or NULL if it failed.
 *
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *ptr;

	new = malloc(sizeof(listint_t));
	ptr = *head;

	if (new)
	{
		new->n = n;
		new->next = NULL;
	}

	while (ptr && ptr->next)
		ptr = ptr->next;

	if (ptr)
		ptr->next = new;

	else
		*head = new;

	return (new);
}

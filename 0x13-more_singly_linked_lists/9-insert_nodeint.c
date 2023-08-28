#include "lists.h"


/**
 * insert_nodeint_at_index -  inserts a new node at a given position.
 *
 * @head: a pointer to the head pointer(passed by reference).
 *
 * @idx: the index of the list where the new node should be added. starts at 0.
 *
 * @n: the data (n).
 *
 * Return: the address of the new node, or NULL if it failed..
 *
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *ptr = *head;
	listint_t *new;

	if (!*head)
		return (NULL);
	i = 0;

	while (i < idx - 1 && ptr)
	{
		ptr = ptr->next;
		i++;
	}

	if (ptr)
	{
		new = malloc(sizeof(listint_t));

		if (new)
		{
			new->n = n;
			new->next = ptr->next;
			ptr->next = new;
		}

		return (new);
	}
	return (NULL);
}

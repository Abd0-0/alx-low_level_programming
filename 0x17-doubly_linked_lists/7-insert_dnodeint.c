#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to head of list
 * @idx: index of the list where the new node should be added
 * @n: data of the new node
 * Return:  the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *next_node, *head = *h;
	unsigned int i;

	if (!head || idx == 0)
		return (add_dnodeint(h, n));

	for (i = 0; i < idx && head; i++)
		head = head->next;

	if (head)
	{
		if (head->next == NULL)
			return (add_dnodeint_end(h, n));

		new = make_node(n);
		if (!new)
			return (NULL);

		next_node = head->next;
		head->next = new;
		next_node->prev = new;
		new->next = next_node;
		new->prev = head;

		return (new);
	}

	return (NULL);
}

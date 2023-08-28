#include "lists.h"

/**
 * get_nodeint_at_index -  a function that returns the nth node.
 *
 * @index: the index of the node, starting at 0.
 *
 * Retuen: the nth node of a listint_t linked list.
 * or NULL if the node doesn't exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *ptr = head;

	if (!head)
		return (NULL);

	i = 0;

	while (i < index && ptr)
	{
		ptr = ptr->next;
		i++;
	}

	return (ptr);
}

#include "lists.h"


/**
 * listint_len - function that returns the n of nodes in a linked list.
 *
 * @h: the head of the list.
 *
 * Return: the number of nodes.
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;


	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}

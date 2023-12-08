#include "lists.h"

/**
 * get_dnodeint_at_index - returns nth node of a d_list.
 * @head: pointer to the head of the list.
 * @index: index of the node to return.
 *
 * Return: nth node, else NULL.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	temp = head;
	i = 0;
	while (temp)
	{
		if (i == index)
			return (temp);
		temp = temp->next;
		i++;
	}
	return (NULL);
}

#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index of a linked list.
 *
 * @head: a pointer to the head pointer(passed by reference).
 *
 * @index: the index of the node that should be deleted. Index starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed
 *
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *cur = *head;
	listint_t *prev = *head;

	if (!*head || !head)
		return (-1);

	if (index <= i)
	{
		*head = cur->next;
		free(cur);
		return (1);
	}

	if (index > i)
	{
		while (index != i && cur)
		{
			prev = cur;
			cur =  cur->next;
			index--;
		}

		if (cur)
		{
			prev->next = cur->next;
			free(cur);
			return (1);
		}
	}
	return (-1);
}

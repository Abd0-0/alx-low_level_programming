#include "lists.h"
#include <stdint.h>

/**
 * find_listint_loop - finds a loop in listint_t linked list.
 *
 * @head: a pointer to the head.
 *
 * Return: The address of the node where the loop starts, or NULL.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *list[6000];
	int i, counter = 0;

	if (!head)
		return (NULL);

	while (head != NULL)
	{
		i = 0;

		while (i < counter)
		{
			if (list[i] == head)
			{
				return (head);
			}
			i++;
		}

		list[counter] = head;
		head = head->next;
		counter++;
	}
	return (NULL);
}

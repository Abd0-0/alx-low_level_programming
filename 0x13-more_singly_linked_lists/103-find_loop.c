#include "lists.h"
#include <stdint.h>

listint_t *find(listint_t *head);

/**
 * find_listint_loop - finds a loop in listint_t linked list.
 *
 * @head: a pointer to the head.
 *
 * Return: The address of the node where the loop starts, or NULL.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr;

	ptr = find(head);

	if (!ptr)
		return (NULL);
	return (ptr);
}

#include "lists.h"

/**
 * find - a function to find a loop.
 *
 * @head: a pointer to the head of the list.
 *
 * Return: The address of the node where the loop starts, or NULL..
 *
 */

listint_t *find(listint_t *head)
{
	listint_t *list[6000];
	int i, count = 0;
	listint_t *ptr;

	if (head == NULL)
		return (NULL);

	ptr = head;

	while (ptr)
	{
		i = 0;

		while (i < count)
		{
			if (list[i] == ptr)
			{
				return (ptr);
			}
			i++;
		}
		list[count] = ptr;
		ptr = ptr->next;
		count++;
	}

	return (NULL);
}

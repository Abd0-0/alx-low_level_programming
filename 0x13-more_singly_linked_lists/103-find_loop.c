#include "lists.h"
#include <stdint.h>

/**
 * find_listint_loop - finds a loop in listint_t linked list.
 *
 * @head: a pointer to the head.
 *
 * Return: The address of the node where the loop starts, or NULL if there is no loop.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *list[6000];
	int counter = 0;
	int j;

	if (!head)
		return (NULL);

	while (head != NULL)
	{
		j = 0;

		while (j < counter)
		{
			if (list[j] == head)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				return (head);
			}
			j++;
		}

		printf("[%p] %d\n", (void *)head, head->n);
		list[counter] = head;
		head = head->next;
		counter++;
	}
	return (NULL);
}

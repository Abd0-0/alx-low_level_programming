#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 *
 * @head: a pointer to the head.
 *
 * Return: the number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *ptr[1000];
	size_t counter = 0;
	size_t j;

	if (!head)
		exit(98);

	while (head != NULL)
	{
		j = 0;

		while (j <= counter)
		{
			if (ptr[j] == head)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				return (counter);
			}
			j++;
		}

		printf("[%p] %d\n", (void *)head, head->n);
		ptr[counter] = head;
		head = head->next;
		counter++;
	}
	return (counter);
}

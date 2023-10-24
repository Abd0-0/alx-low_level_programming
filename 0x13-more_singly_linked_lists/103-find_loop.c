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
	int i, count = 0;
	listint_t *ptr, *check;

	if (head == NULL)
		return (NULL);

	ptr = head;

	while (ptr)
	{
		i = 0;
		check = head;

		while (i < count)
		{
			if (check == ptr)
			{
				return (ptr);
			}
			check = check->next;
			i++;
		}
		ptr = ptr->next;
		count++;
	}

	return (ptr);
}

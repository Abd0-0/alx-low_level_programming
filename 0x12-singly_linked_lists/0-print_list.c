#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list.
 *
 * @h: the head of the list.
 *
 * Return: the number of nodes.
 *
 */

size_t print_list(const list_t *h)
{
	unsigned int count = 0;

	if (h == NULL)
	{
		printf("[%lu] %s\n", count, "(nil)");
	}

	else
	{
		while (h != NULL)
		{
			count++;
			printf("[%lu] %s\n", count, h->str);
			h = h->next;
		}
	}
	return (count);
}

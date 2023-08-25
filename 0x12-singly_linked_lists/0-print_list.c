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
	list_t *ptr = h;
	size_t count = 0;

	if (ptr == NULL)
	{
		printf("[%lu] %s\n", count, "(nil)");
	}

	else
	{
		while (ptr != NULL)
		{
			count++;
			printf("[%lu] %s\n", count, ptr->str);
			ptr = ptr->next;
		}
	}
	return (count);
}

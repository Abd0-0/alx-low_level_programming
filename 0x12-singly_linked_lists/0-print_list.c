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
	size_t count = 0;

	if (h == NULL)
	{
		printf("[0] %s\n", "(nil)");
	}

	else
	{
		while (h != NULL)
		{
			count++;
			printf("[%d] %s\n", _strlen(h->str), h->str);
			h = h->next;
		}
	}
	return (count);
}

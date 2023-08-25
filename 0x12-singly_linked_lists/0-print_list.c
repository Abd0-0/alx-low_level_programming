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


	while (h != NULL)
	{
		count++;
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
	}
	
	return (count);
}

/**
 * _strlen - a function that returns the length of a string.
 *
 * @s: a pointer to a string.
 *
 * Return: the length of the string.
 */

int _strlen(const char *s)
{
	int i;

	if (!s)
		return (0);

	for (i = 0; *s != '\0'; i++)
	{
		s++;
	}

	return (i);
}

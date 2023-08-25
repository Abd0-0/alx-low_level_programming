#include "lists.h"


/**
 * add_node - adds a new node at the beginning of a list_t list.
 *
 * @head: pointer to the head of the list.
 * @str: the string.
 *
 * Return: the address of the new element, or NULL if it failed.
 *
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));

	if (new != NULL )
	{
		new->str = strdup(str);

		if (new->str == NULL)
			return (NULL);

		new->len = _strlen(str);
		new->next = *head;
	}

	return (new);
}

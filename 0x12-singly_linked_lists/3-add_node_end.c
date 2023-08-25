#include "lists.h"


/**
 * add_node_end - adds a new node at the end of a list_t list.
 *
 * @head: pointer to the head of the list.
 * @str: the string.
 *
 * Return: the address of the new element, or NULL if it failed.
 *
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *end;

	end = *head;
	new = malloc(sizeof(list_t));

	while (end && end->next)
		end = end->next;

	if (new && str)
	{
		new->str = strdup(str);

		if (new->str == NULL)
		{
			free(new);
			return (NULL);
		}

		new->len = _strlen(new->str);
		new->next = NULL;
	}

	if (end)
	{
		end->next = new;
	}
	else
		*head = new;

	return (new);
}

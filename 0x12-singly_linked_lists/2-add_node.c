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

	if (new != NULL)
	{
		new->str = strdup(str);
		new->len = _strlen(str);
		new->next = *head;
	}

	return (new);
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

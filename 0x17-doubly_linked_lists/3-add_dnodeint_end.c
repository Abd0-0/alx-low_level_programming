#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current, *new;

	new = make_node(n);
	if (!new)
		return (NULL);

	if (!head || *head == NULL)
	{
		*head = new;
		return (new);
	}

	while (current->next)
		current = current->next;

	current->next = new;
	new->prev = current;

	return (new);
}

/**
 * make_node - makes a new dll node
 *
 *
 * @n: value of the element
 * Return: the address of the new node
 */

dlistint_t *make_node(int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	return (new);
}

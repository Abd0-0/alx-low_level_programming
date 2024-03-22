#include "lists.h"

dlistint_t *make_node(int n);

/**
 * add_dnodeint - adds a new node at the beginning
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = make_node(n);

	if (*head == NULL)
		*head = new;

	else
	{
		new->next = *head;
		(*head)->prev = new;
		*head = new;
	}

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

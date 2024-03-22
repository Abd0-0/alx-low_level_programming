#include "lists.h"
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

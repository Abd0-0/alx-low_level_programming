#include "lists.h"


/**
 * add_nodeint - adds a new node at the beginning of a list_t list.
 *
 * @head: pointer to the head of the list.
 * @n: the integer.
 *
 * Return: the address of the new element, or NULL if it failed.
 *
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new)
	{
		new->n = n;
		new->next = *head;
		*head = new;
	}
	return (new);
}

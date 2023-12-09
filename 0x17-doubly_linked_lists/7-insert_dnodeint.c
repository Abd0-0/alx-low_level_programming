#include "lists.h"
#include <stddef.h>

/**
 * insert_dnodeint_at_index - inserts a new node at
 * a given position
 *
 * @h: head of the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newp, *temp, *temp2, *p = NULL;
	unsigned int i = 0;

	temp = *h;

	if (idx == 0)
	{
		newp = add_dnodeint(h, n);
		return (newp);
	}

	while (idx > i)
	{
		temp = temp->next;
		i++;
	}

	if (!temp)
		return (NULL);

	if (temp->next == NULL)
	{
		newp = add_dnodeint_end(h, n);
		return (newp);
	}

	else
	{
		p = make_node(p, n);
		temp2 = temp->next;
		temp->next = p;
		temp2->prev = p;
		p->next = temp2;
		p->prev = temp;

		return (p);
	}
	return (NULL);
}

/**
 * make_node - makes new node.
 *
 * @newp: pointer to the head.
 * @n: value of the new node.
 *
 * Return: pointer to the new node.
 */

dlistint_t *make_node(dlistint_t *newp, int n)
{
	newp = malloc(sizeof(dlistint_t));
	if (!newp)
		return (NULL);

	newp->n = n;
	newp->next = NULL;
	newp->prev = NULL;

	return (newp);
}

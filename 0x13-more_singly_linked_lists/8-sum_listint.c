#include "lists.h"


/**
 * sum_listint - function that returns sum of all the data(n) of linked list.
 *
 * @head: the head of the list.
 *
 * Return: the sum of all nodes.
 * 0 if the list is empty.
 *
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

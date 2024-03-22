#include "lists.h"
/**
* free_dlistint - function
* @head: pointer to first node of dbl lnkd list
*
* Decription: function to free a a dbl lnkd list
* Return: 0 (success)
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;

	if (head == NULL)
		return;

	while (head->next != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
	free(head);
}

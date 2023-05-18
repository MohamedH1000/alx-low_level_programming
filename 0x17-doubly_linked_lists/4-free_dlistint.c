#include "lists.h"
/**
 * free_dlistint - a function that frees a diubly linked list
 * @head: the pointer to the head of a doubly linked list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *now = NULL;

	while (head)
	{
		now = head;
		head = head->next;
		free(now);
	}
}

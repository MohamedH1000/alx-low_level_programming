#include "lists.h"
/**
 * add_dnodeint_end - a function that add a node at
 * the end of a doubly linked list
 * @head: the doubly linked list head
 * @n: the value to add to the node
 * Return: the pointer that is new
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *sp = NULL;
	dlistint_t *now = *head;

	sp = malloc(sizeof(dlistint_t));
	if (sp)
	{
		sp->n = n;
		sp->next = NULL;
		sp->prev = NULL;

		if (!(*head))
			*head = sp;
		else
		{
			while (now->next)
				now = now->next;
			now->next = sp;
			sp->prev = now;
		}
	}
	return (sp);
}

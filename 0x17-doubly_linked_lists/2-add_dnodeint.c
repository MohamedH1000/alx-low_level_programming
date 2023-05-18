#include "lists.h"
/**
 * add_dnodeint - a function that add node at the beginning
 * of a doubly linked list
 * @head: the doubly linked list head
 * @n: the value that we will add to the node
 * Return: a pointer that is new
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *sp = NULL;

	sp = malloc(sizeof(dlistint_t));
	if (sp)
	{
		sp->n = n;
		sp->prev = NULL;
		if (*head)
			(*head)->prev = sp;
		sp->next = *head;
		*head = sp;
	}

	return (sp);
}

#include "lists.h"
/**
 * dlistint_len - a function that return the number
 * of elements in a doubly linked list
 * @h: the list head pointer
 * Return: the list elements number
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
/**
 * insert_dnodeint_at_index - a function that insert
 * a node at given position
 * @h: a doubly linked list head pointer
 * @idx: the node index to insert to
 * @n: the value of the node
 * Return: the pointer that is new
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int tall = dlistint_len(*h);
	dlistint_t *sp = NULL, *temp = *h;

	if (h)
	{
		if (idx > tall)
			return (NULL);
		if (idx == 0)
			return (add_dnodeint(h, n));
		if (idx == tall)
			return (add_dnodeint_end(h, n));

		sp = malloc(sizeof(dlistint_t));
		sp->n = n;
		if (sp)
		{
			while (idx--)
			{
				temp = temp->next;
			}
			sp->prev = temp->prev;
			sp->next = temp;
			temp->prev->next = sp;
			temp->prev = sp;
		}
	}
	return (sp);
}

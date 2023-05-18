#include "lists.h"
/**
 * get_dnodeint_at_index - a function that return the nth node
 * of the doubly linked list at given index
 * @head: a doubly linked list head
 * @index: a node to be get from index
 * Return: the nth node index address
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int a = 0;

	while (a != index && head)
	{
		head = head->next;
		a++;
	}

	if (a == index && head)
		return (head);
	return (NULL);
}

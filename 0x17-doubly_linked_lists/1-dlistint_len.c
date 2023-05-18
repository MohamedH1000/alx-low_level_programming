#include "lists.h"
/**
 * dlistint_len - a function that returns
 * the number of elements in a doubly linked list
 * @h: the list head pointer
 * Return: the list elements numbers
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

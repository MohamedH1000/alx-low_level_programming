#include "lists.h"
/**
 * print_dlistint - a function that prints all the elements
 * of a list
 * @h: the head of a list
 * Return: the number of nodes in a list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}

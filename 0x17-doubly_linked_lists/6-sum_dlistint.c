#include "lists.h"
/**
 * sum_dlistint - a function that return the sum
 * of all data in a doubly linked list
 * @head: a doubly linked list head
 * Return: all data summation
 */
int sum_dlistint(dlistint_t *head)
{
	int add = 0;

	while (head)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}

#include "lists.h"
/**
 * delete_dnodeint_at_index - a function that remove
 * element at a given index
 * @head: the linked list head
 * @index: the index to be deleted
 * Return: in case of error -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int a = 0;
	dlistint_t *temp;
	dlistint_t *t_d = *head;

	if (*head && head)
	{
		if (index == 0)
		{
			temp = *head;
			*head = (*head)->next;
			if (*head)
				(*head)->prev = NULL;
			free(temp);
		}
		else
		{
			while (a != index && t_d)
			{
				temp = t_d;
				t_d = temp->next;
				a++;
			}
			if (a == index && t_d)
			{
				temp->next = t_d->next;
				if (t_d->next)
					t_d->next->prev = temp;
				free(t_d);
			}
			else
				return (-1);
		}
		return (1);
	}
	return (-1);
}

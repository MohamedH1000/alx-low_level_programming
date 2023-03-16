#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - a function that reallocates a memory block using malloc and free
 * @ptr : void pointer
 * @old_size :  is the size, in bytes, of the allocated space for ptr
 * @new_size : is the new size, in bytes of the new memory block
 * Return: Always 0
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int a;
	char *new;
	char *old;

	old = ptr;

	if (old_size == new_size)
	{
		return (ptr);
	}
	if (ptr == 0)
	{
		new = malloc(new_size * sizeof(char));
		return (new);
	}
	if (new_size == 0 && ptr != 0)
	{
		free(ptr);
		return (NULL);
	}
	new = malloc(new_size * sizeof(char));
	if (new == 0)
	{
		return (NULL);
	}
	if (new_size < old_size)
	{
		for (a = 0; a < new_size; a++)
			new[a] = old[a];
		return (new);
	}
	free(ptr);
	return (new);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - fucntion that allocates memory for an array
 * @nmemb: number
 * @size : size full
 * Return: NULL if failed
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int a;
	void *tmp;

	if (nmemb <= 0 || size <= 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);
	tmp = p;
	if (p == 0)
	{
		return (NULL);
	}
	for (a = 0; a < (nmemb * size); a++)
	{
		p[a] = 0;
	}
	return (tmp);
}

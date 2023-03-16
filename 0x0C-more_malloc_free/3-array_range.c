#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - a function that creates an array of integers
 * @min : min value in the array
 * @max : max value in the array
 * Return: the pointer to the newely created array
 */
int *array_range(int min, int max)
{
	int i;
	int *p;

	if (min > max)
	{
		return (NULL);
	}
	p = malloc(sizeof(int) * (max - min + 1));
	if (p == 0)
	{
		return (NULL);
	}
	for (i = 0; min < max; i++, min++)
	{
		p[i] = min;
	}
	return (p);
}

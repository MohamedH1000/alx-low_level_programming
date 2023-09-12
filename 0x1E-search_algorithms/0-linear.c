#include "search_algos.h"

/**
 * linear_search - a value in an array of integers
 * to be searched
 * @array: an input array
 * @size: array size
 * @value: search in the value
 * Return: exit success always
 */
int linear_search(int *array, size_t size, int value)
{
	int a;

	if (array == NULL)
		return (-1);

	for (a = 0; a < (int)size; a++)
	{
		printf("Value checked array[%u] = [%d]\n", a, array[a]);
		if (value == array[a])
			return (a);
	}
	return (-1);
}

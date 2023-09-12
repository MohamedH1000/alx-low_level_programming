#include "search_algos.h"

/**
 * recursive_search - a value of an integer in an array
 * to be searched by this function
 *
 * @array: array that is input
 * @size: array size
 * @value: to search in a value
 * Return: number index
 */
int recursive_search(int *array, size_t size, int value)
{
	size_t nos = size / 2;
	size_t a;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (a = 0; a < size; a++)
		printf("%s %d", (a == 0) ? ":" : ",", array[a]);

	printf("\n");

	if (nos && size % 2 == 0)
		nos--;

	if (value == array[nos])
		return ((int)nos);

	if (value < array[nos])
		return (recursive_search(array, nos, value));

	nos++;

	return (recursive_search(array + nos, size - nos, value) + nos);
}

/**
 * binary_search - call the function binary search
 * to return the index of the number
 *
 * @array: array that is input
 * @size: array size
 * @value: search in value
 * Return: number index
 */
int binary_search(int *array, size_t size, int value)
{
	int index;

	index = recursive_search(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}

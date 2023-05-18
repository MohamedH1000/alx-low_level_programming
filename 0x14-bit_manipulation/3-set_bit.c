#include "main.h"
/**
 * set_bit - a function that sets a value of a bit to 1 at a given index
 * @n : the value of a bit
 * @index : the index
 * Return: 1 if worked and -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a = 1;

	if (sizeof(n) * 8 < index)
	{
		return (-1);
	}
	a <<= index;
	*n |= a;
	return (1);
}

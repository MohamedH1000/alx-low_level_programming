#include "main.h"
/**
 * clear_bit - a function that sets the value of a bit to 0 at given index
 * @n : the value to be set
 * @index : is the index
 * Return: 1 if worked and succeeded and 01 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a = 1;

	if (sizeof(n) * 8 < index)
	{
		return (-1);
	}
	a <<= index;
	*n &= ~a;
	return (1);
}

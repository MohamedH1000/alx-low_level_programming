#include "main.h"
/**
 * flip_bits - a function that return the number of bits you would need to flip
 * @n : a number
 * @m : another number
 * Return: the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a;
	int b = 0;

	a = n ^ m;
	while (a >= 1)
	{
		if ((a & 1) == 1)
		{
			b++;
			a >>= 1;
		}
	}
	return (b);
}

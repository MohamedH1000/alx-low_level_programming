#include "main.h"
/**
 * swap_int - to swap the values of two integers
 * @a : first variable
 * @b : second variable
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

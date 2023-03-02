#include "main.h"
/**
 * reverse_array - a function that reverse the content of an array of integers
 * @a : integer a
 * @n : integer n
 */
void reverse_array(int *a, int n)
{
	int swap = 0, i, b;

	for (i = 0; i < n; i++)
	{
		for (b = 0; b < (n - i - 1); b++)
		{
			swap = a[b + 1];
			a[b + 1] = a[b];
			a[b] = swap;
		}
	}
}

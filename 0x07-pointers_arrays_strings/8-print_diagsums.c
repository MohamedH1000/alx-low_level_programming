#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - a function that prints the sum of the two diagonals
 * of a square matrix of integers
 * @a : square matrix of integers
 * @size : the column and row size of a matrix
 */
void print_diagsums(int *a, int size)
{
	int prim, sum1, sum2, diag1, diag2, row;

	prim = 0, sum1 = 0, sum2 = 0, diag1 = 0, diag2 = 0, row = 0;
	while (prim < size * size)
	{
		if (prim == diag1 + (row * size))
		{
			sum1 += a[prim];
		}
		if (prim == (size - diag2 - 1) + (row * size))
		{
			sum2 += a[prim];
		}
		if (((prim + 1) % size) == 0)
		{
			row++, diag1++, diag2++;
		}
		prim++;
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}

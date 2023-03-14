#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - a functio that frees a 2 dimensional grid previously
 * @grid : row of matrix
 * @height : columns of string
 * Return: a pointer to a two dimensional arrays of integers
 */
void free_grid(int **grid, int height)
{
	int a;
	int *p;

	for (a = 0; a < height; a++)
	{
		p = grid[a];
		free(p);
	}
	free(grid);
}

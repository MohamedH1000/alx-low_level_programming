#include "main.h"
/**
 * print_chessboard - a function that prints the chessboard
 * @a : number of rows
 */
void print_chessboard(char (*a)[8])
{
	int sub, prim = 0;

	while (prim < 8)
	{
		sub = 0;
		while (sub < 8)
		{
			_putchar(a[prim][sub++]);
		}
		_putchar('\n');
		prim++;
	}
}

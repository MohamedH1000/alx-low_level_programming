#include "main.h"
#include <stdio.h>
/**
 * print_rev - function that print string in reverse
 * @s : Define string
 */
void print_rev(char *s)
{
	int a = 0;

	while (a[s] != '\0')
	{
		a++;
	}
	for (a -= 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}

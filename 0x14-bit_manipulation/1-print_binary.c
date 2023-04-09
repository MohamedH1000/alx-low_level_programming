#include "main.h"
#include <stdio.h>
/**
 * print_binary - to print the binary after converted from number
 * @n: the number to be converted
 * Return: the number after convertion process
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) + '0');
}

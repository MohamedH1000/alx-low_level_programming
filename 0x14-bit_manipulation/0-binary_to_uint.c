#include "main.h"
#include <stddef.h>
/**
 * _strlen - to calculate the string length
 * @c : the char to be calculated
 * Return: the length in an integer form
 */
int _strlen(const char *c)
{
	int a;

	for (a = 0; c[a] != '\0'; a++)
	{
		continue;
	}
	return (a);
}
/**
 * binary_to_uint - a function to convert from binary to char
 * @b : the char to be tested
 * Return: the binary that have been converted to char
 */
unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int ln;
	unsigned int c = 1;
	unsigned int f = 0;

	if (b == NULL)
	{
		return (0);
	}
	ln = _strlen(b);
	for (j = ln - 1; j >= 0; j--)
	{
		if (b[j] != '0' && b[j] != '1')
		{
			return (0);
		}
		if (b[j] == '1')
		{
			f += c;
		}
		c = c * 2;
	}
	return (f);
}

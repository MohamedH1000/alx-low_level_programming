#include "main.h"
/**
 * string_toupper - a function that
 * changes all lowercase letters of a string to uppercase
 * @n : a char
 * Return: n
 */
char *string_toupper(char *n)
{
	int a = 0;

	while (n[a] != '\0')
	{
		if (n[a] < 123 && n[a] > 96)
		{
			n[a] = (n[a] - 32);
		}
		a++;
	}
	return (n);
}

#include "main.h"
/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 * @s : string to be scanned
 * @accept : substring of chars
 * Return: to return the pointer to the first occurence s
 */
char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		a = 0;
		while (*(accept + a) != '\0')
		{
			if (*(accept + a) == *s)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (0);
}

#include "main.h"
/**
 * _strncpy - a function that copy a string
 * @dest : destination char
 * @src : source char
 * @n : it represents the length
 * Return: destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int sizedest;
	int sizesrc;
	int a = 0;

	for (sizedest = 0; dest[sizedest] != '\0'; sizedest++)
	{
	}
	for (sizesrc = 0; src[sizesrc] != '\0'; sizesrc++)
	{
	}
	while (a < n && a < sizesrc)
	{
		dest[a] = src[a];
		a++;
	}
	if (n > sizesrc)
	{
		while (a < sizedest && a < n)
		{
			dest[a] = '\0';
			a++;
		}
	}
	return (dest);
}

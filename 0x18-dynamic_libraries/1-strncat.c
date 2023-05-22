#include "main.h"
/**
 * _strncat - a function that concatenates two strings
 * @dest : destination char
 * @src : source char
 * @n : is a position
 * Return: to the destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int sizedest;
	int sizesrc;
	int i;

	for (sizedest = 0; dest[sizedest] != '\0'; sizedest++)
	{
	}
	for (sizesrc = 0; src[sizesrc] != '\0'; sizesrc++)
	{
	}
	if (n > sizesrc)
	{
		n = sizesrc;
	}
	for (i = 0; i < n; i++)
	{
		dest[i + sizedest] = src[i];
	}
	return (dest);
}

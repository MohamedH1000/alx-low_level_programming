#include "main.h"
/**
 * _strcat - the function append the dest string to the src string
 * @dest : destination char
 * @src : source char
 * Return: destination
 */
char *_strcat(char *dest, char *src)
{
	int sizedest;
	int sizesrc;
	int a;

	for (sizedest = 0; dest[sizedest] != '\0'; sizedest++)
	{
	}
	for (sizesrc = 0; src[sizesrc] != '\0'; sizesrc++)
	{
	}
	for (a = 0; a < sizesrc; a++)
	{
		dest[a + sizedest] = src[a];
	}
	return (dest);
}

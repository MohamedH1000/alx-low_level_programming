#include "main.h"
/**
 * *_strcpy - a function that copy a string pointed to by src
 * @dest : the buffer pointed
 * @src : copy the string that is pointed to this src
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}

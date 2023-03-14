#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - a function that returns a pointer to a newly allocated
 * space in memory
 * @str : the string to be allocated
 * Return: Null if str = NULL , in success return the pointer to the
 * duplicated string
 */
char *_strdup(char *str)
{
	char *strn = NULL;
	unsigned int a;
	int n;

	if (str == NULL)
	{
		return (NULL);
	}
	for (n = 0; str[n] != '\0'; n++)
		;
	strn = (char *)malloc(n + 1 * sizeof(char));
	if (strn != NULL)
	{
		for (a = 0; str[a] != '\0'; a++)
		strn[a] = str[a];
	}
	else
	{
		return (NULL);
	}
		strn[a] = '\0';
		return (strn);
}

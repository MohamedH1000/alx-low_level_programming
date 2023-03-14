#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - a function that concatenates two string
 * @s1 : string 1 to be concatenated
 * @s2 : string 2 that concatenate to string 1
 * Return: NULL in faliure
 */
char *str_concat(char *s1, char *s2)
{
	char *strn = NULL;
	unsigned int a;
	int n1;
	int n2;
	int count;

	count = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (n1 = 0; s1[n1] != '\0'; n1++)
		;
	for (n2 = 0; s2[n2] != '\0'; n2++)
		;
	strn = (char *)malloc((n1 + n2 + 1) * sizeof(char));
	if (strn == NULL)
	{
		return (NULL);
	}
	for (a = 0; s1[a] != '\0'; a++)
	{
		strn[a] = s1[a];
	}
	for (; s2[count] != '\0'; a++)
	{
		strn[a] = s2[count];
		count++;
	}
	return (strn);
}

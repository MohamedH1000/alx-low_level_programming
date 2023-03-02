#include "main.h"
/**
 *  _strcmp - a function that compares two strings
 *  @s1 : string number 1
 *  @s2 : string number 2
 *  Return: the number
 */
int _strcmp(char *s1, char *s2)
{
	int n = 0, a = 0;

	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
		{
			n = s1[a] - s2[a];
			return (n);
		}
		a++;
	}
	return (n);
}

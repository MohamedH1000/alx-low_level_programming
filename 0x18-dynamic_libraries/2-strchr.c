#include <stdio.h>
/**
 * _strchr - finds if char occurs in string
 * @s : string to be checked and scanned
 * @c : character to find in the string s
 * Return: a pointer to the start instant of the character, otherwise null
 */
char *_strchr(char *s, char c)
{
	int a = 0;

	while (*(s + a))
	{
		if (*(s + a) == c)
		{
			return (s + a);
		}
		a++;
	}
	if (*(s + a) == c)
	{
		return (s + a);
	}
	return (NULL);
}

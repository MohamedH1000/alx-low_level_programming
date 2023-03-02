#include "main.h"
/**
 * leet - a function that encodes a string into 1337
 * @s : a string
 * Return: the string that is encoded
 */
char *leet(char *s)
{
	int j, i = 0;
	char a[] = "aAeEoOtTlL";
	char b[] = "43071";

	while (s[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = b[j / 2];
			}
		}
		i++;
	}
	return (s);
}

#include "main.h"
/**
 * rot13 - a function that encodes a string using rot13
 * @s : string
 * Return: the string that has been encoded
 */
char *rot13(char *s)
{
	int b, swap = 0, a = 0;
	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[] = "NPQRSTUVWXYZABCDEFGHIJKLMnpqrstuvwxyzabcdefghijklm";

	while (s[a] != '\0')
	{
		swap = 0;
		for (b = 0; (b < 52) && swap == 0; b++)
		{
			if ((s[a] == in[b]) && swap == 0)
			{
			s[a] = out[b];
			swap = 1;
			}
		}
	a++;
	}
return (s);
}

#include "main.h"
/**
 * _strspn - a function that get the length of a prefix substring
 * @s : string to be scanned
 * @accept : string containing characters to match
 * Return: This function
 * returns the number of characters
 * in the initial segment of str1
 * which consist only of characters from str2
 */
unsigned int _strspn(char *s, char *accept)
	{
		int a;
		int consist = 0;
		int prev;

		while (*s)
		{
			a = 0;
			prev = consist;
			while (*(accept + a) != '\0')
			{
				if (*(accept + a) == *s)
				{
					consist++;
				}
				a++;
			}
			if (consist == prev)
			{
				break;
			}
			s++;
		}
		return (consist);
	}

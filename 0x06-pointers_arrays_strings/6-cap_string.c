#include "main.h"
/**
 * cap_string - a function that capitalizes all words of a string
 * @s : a string
 * Return: string
 */
char *cap_string(char *s)
{
	int a = 0;
	int ins = 0;

	while (s[a] != '\0')
	{
		if ((s[a] < 91 && s[a] > 64) && ins == 0)
		{
			ins = 1;
		}
		if ((s[a] < 58 && s[a] > 47) && ins == 0)
		{
			ins = 1;
		}
		if ((s[a] < 123 && s[a] > 96) && ins == 0)
		{
			s[a] = (s[a] - 32);
			ins = 1;
		}
		switch (s[a])
		{
			case 32:
			case 9:
			case 10:
			case 44:
			case 59:
			case 46:
			case 33:
			case 63:
			case 34:
			case 40:
			case 41:
			case 123:
			case 125:
			ins = 0;
		}
		a++;
	}
	return (s);
}

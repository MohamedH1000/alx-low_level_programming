#include "main.h"
/**
 * _strstr - a function that locates a substring
 * @haystack : string to be scanned
 * @needle : substring to search
 * Return: the pointer to the beginning of needle in haystack
 */
char *_strstr(char *haystack, char *needle)
{
	char *occ, *temp;

	if (!*needle)
	{
		return (haystack);
	}
	while (*haystack)
	{
		if (*haystack == *needle)
		{
			occ = haystack;
			temp = needle;
		}
		while (*temp)
		{
			if (*haystack++ != *temp++)
			{
				haystack = occ;
				break;
			}
		}
		if (occ != haystack)
		{
			return (occ);
		}
		haystack++;
	}
	return (0);
}

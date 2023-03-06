#include "main.h"
/**
 * _strstr - a function that locates a substring
 * @haystack : string to be scanned
 * @needle : substring to search
 * Return: the pointer to the beginning of needle in haystack
 */
char *_strstr(char *haystack, char *needle)
{
	char *occurance, *tempNeedle;

	if (!*needle) /* empty needle */
		return (haystack);
	while (*haystack)
	{
		if (*haystack == *needle) /* first ch match */
		{
			occurance = haystack;
			tempNeedle = needle;
			while (*tempNeedle) /* check if match */
			{
				if (*haystack++ != *tempNeedle++)
				{ /* not a match, reset pointer to first occurance */
					haystack = occurance;
					break;
				}
			}
			if (occurance != haystack) /* didn't reset, found match */
				return (occurance);
		}
		haystack++;
	}
	return (0); /* didn't find match */
}

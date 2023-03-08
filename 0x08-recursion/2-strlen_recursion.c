#include "main.h"
/**
 * _strlen_recursion - a function that returns a length of a string
 * @s : the string to be tested
 * Return: the length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}

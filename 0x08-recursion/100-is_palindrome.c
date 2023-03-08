#include <stdio.h>
#include "main.h"
/**
 * _strlen_recursion - a function that returns a length of a string
 * @s : a string to be counted
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
	return (1 + _strlen_recursion(s + 1));
	}
	else
	return (0);
}
/**
 * check - a function that help to check the palindrome
 * @str : the string
 * @len : the length of a string
 * @count : count of recursion
 * Return: 1 if the string is pallindrome and 0 if not
 */
int check(char *str, int len, int count)
{
if (count >= len)
return (1);
if (str[count] == str[len])
{
return (check(str, len - 1, count + 1));
}
return (0);
}
/**
 * is_palindrome - a function that return 1 if
 * the string is palindrome and 0 if not
 * @s : a string to be checked
 * Return: 1 if the string is palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);
	int count = 0;

	return (check(s, len - 1, count));
}

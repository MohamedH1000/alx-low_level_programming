#include "main.h"
/**
 * _strlen - its a function that return a length of a string
 * @s : char data type
 * Return: string length
 */
int _strlen(char *s)
{
	int a;

	for (; *s != '\0'; s++)
	{
		a++;
	}
	return (a);
}

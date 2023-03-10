#include <stdio.h>
#include "main.h"
/**
 * _putchar - a function that prints single characters
 * @c : the character to be printed
 * Return: 1 if seccess and -1 if error and its set approprietly
 */
int _putchar(char c)
{
	return (write(1 , @c, 1));
}

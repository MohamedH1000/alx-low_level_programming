#include <unistd.h>
/**
 * _putchar - print single character
 * @c : the character to be printed
 * Return: the character to be printed
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

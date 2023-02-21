#include "main.h"
/**
 * print_alphabet-x10 - to print all characters from a to z
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int cnt = 0;
	char c;

	while (cnt <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		cnt++;
		_putchar('\n');
	}
}

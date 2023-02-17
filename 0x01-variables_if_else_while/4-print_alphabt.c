#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;

c = 'a';
if (c <= 'z')
{
	putchar(c);
	c++;
}
else if (c == 'q' && c == 'e')
{
	continue;
}
putchar('\n');
return (0);
}

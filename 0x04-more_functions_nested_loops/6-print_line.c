#include "main.h"
/**
 * print_line - to print line using the -
 * @n : the numbers of line to draw
 */
void print_line(int n)
{
int i;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i <= n; i++)
{
_putchar(95);
}

_putchar('\n');
}
}

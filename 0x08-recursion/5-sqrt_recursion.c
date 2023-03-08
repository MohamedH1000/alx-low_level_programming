#include "main.h"
int squareroot(int n, int a);
/**
 * _sqrt_recursion - a function that returns
 * the natural square root of a number
 * @n : the number to be square rooted
 * Return: the natural square root of a number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
		return (squareroot(n, (n + 1) / 2));
}
/**
 * squareroot - checks if perfect square
 * @n : input
 * @a : counter
 * Return: if its a square root
 */
int squareroot(int n, int a)
{
if (a < 1)
{
return (-1);
}
else if (a * a == n)
{
return (a);
}
else
{
return (squareroot(n, a - 1));
}
}

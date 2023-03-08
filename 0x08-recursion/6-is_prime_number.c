#include "main.h"
#include <stdio.h>
/**
 * check - to check if the number is prime
 * @a : the iterator
 * @num : the number to be checked
 * Return: 1 if prime num and 0 if not
 */
int check(int a, int num)
{
	if (num % a == 0 || num < 2)
	{
		return (0);
	}
	else if (a == num - 1)
	{
		return (1);
	}
	else if (num > a)
	{
		return (check(a + 1, num));
	}
	return (1);
}
/**
 * is_prime_number - a function that returns 1 if the input integer
 * is a prime number otherwise return 0
 * @n : the number to be tested
 * Return: 1 if prime number and 0 if not
 */
int is_prime_number(int n)
{
return (check(2, n));
}

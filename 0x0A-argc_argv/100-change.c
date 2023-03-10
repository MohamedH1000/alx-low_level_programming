#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
* @argc: number of arguments
* @argv: array of arguments
* Return: 0 is success
**/
int main(int argc, char *argv[])
{
	int a, c;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	c = 0;
	if (a > 25)
	{
		while (a >= 25)
			a -= 25, c++;
	}
	if (a > 10 && a < 25)
	{
		while (a >= 10)
			a -= 10, c++;
	}
	if (a > 5 && a < 10)
	{
		while (a >= 5)
			a -= 5, c++;
	}
	if (a > 2 && a < 5)
	{
		while (a >= 2)
			a -= 2, c++;
	}
	if (a == 1 || a == 2 || a == 5 ||
	    a == 10 || a == 25)
	{
		c++;
	}
	printf("%d\n", c);
	return (0);
}

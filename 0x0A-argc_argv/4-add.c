#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* check - checks if a given char is number or not
* @a: char to be checked
* Return: 1, if its a number, else 0
**/
int check(char *a)
{
	int i, n, len;

	i = 0;
	n = 0;
	len = strlen(a);
	while (i < len)
	{
		if (a[i] < '0' || a[i] > '9')
		{
			return (-1);
		}
		else
			n = n * 10 + (a[i] - '0');
		i++;
	}
	return (n);
}
/**
* main - entry point
* @argc: number of arguments
* @argv: array of arguments
* Return: 0 is success
**/
int main(int argc, char *argv[])
{
	int a, n, sum;

	sum = 0;
	for (a = 1; a < argc; a++)
	{
		n = check(argv[a]);
		if (n == -1)
		{
			printf("Error\n");
			return (1);
		}
		sum += n;
	}
	printf("%d\n", sum);
	return (0);
}

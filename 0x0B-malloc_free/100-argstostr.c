#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - a function that concatenates all the arguments of your program
 * @ac : number of arguments
 * @av : arrays of arguments
 * Return: a pointer to a new string or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int a;
	int b;
	char *p = NULL;
	int c;
	int ext;

	c = 0;
	ext = 0;
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			ext++;
		}
	}
	p = (char *)malloc(ext + ac + 1 * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			p[c] = av[a][b];
			c++;
		}
		p[c] = '\n';
		c++;
	}
		p[c] = '\0';
		return (p);
}

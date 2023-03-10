#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * @argc : number of arguments
 * @argv : array of arguments
 * Return: 0 is success
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}

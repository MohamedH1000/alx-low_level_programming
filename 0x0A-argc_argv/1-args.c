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
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}

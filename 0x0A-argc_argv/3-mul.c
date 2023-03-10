#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc : number of arguments
 * @argv : array of arguments
 * Return: 0 is success
 */
int main(int argc, char *argv[])
{
	int res, n1, n2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	res = n1 * n2;
	printf("%d\n", res);
	return (0);
}

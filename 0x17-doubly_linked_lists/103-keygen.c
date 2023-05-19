#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
  * f1_f2 - a function that copied from server
  * @b: you can say that its argv[1]
  * @b1: argv[1] length
  * @f: determine if its in case of f1 or f2
  * Return: key array elements
  */
int f1_f2(char *b, int b1, char f)
{
	int result, a;

	result = f == 0 ? 0 : 1;
	for (a = 0; a < b1; a++)
	{
		if (f == 0)
			result += b[a];
		else
			result *= b[a];
	}
	return ((result ^ (f == 0 ? 0x4F : 0x55)) & 0x3F);
}
/**
  * f3 - a function that copied from server
  * @b: you can say that is argv[1]
  * @b1: argv[1] length
  * Return: key array element
  */
int f3(char *b, int b1)
{
	int a;
	int result = b[0];

	for (a = 0; a < b1; a++)
		if (b[a] > result)
			result = b[a];
	srand(result ^ 0xE);
	return (rand() & 0x3F);
}
/**
  * f4 - a function copied from server
  * @b: you can say argv[1]
  * @b1: argv[1] length
  * Return: key array element
  */
int f4(char *b, int b1)
{
	int a, result = 0;

	for (a = 0; a < b1; a++)
		result += b[a] * b[a];
	return ((result ^ 0xEF) & 0x3F);
}
/**
  * f5 - a function that copied from server
  * @b: you can say that its argv[1]
  * Return: key array element
  */
int f5(char b)
{
	int a, result = 0;

	for (a = 0; a < b; a++)
		result = rand();
	return ((result ^ 0xE5) & 0x3F);
}
/**
  * main - a modtly generated key from server
  * @ac: count of the arguments
  * @av: vectors of arguments
  * Return: on the case of success it return 0
  */
int main(int ac, char *av[])
{
	char *b;
char ch[] = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char k[7];
	int b1, result;

	if (ac != 2)
		return (-1);
	b = av[1];
	b1 = strlen(b);
	result = ((b1 ^ 0x3B) & 0x3F);
	k[0] = ch[result];
	result = f1_f2(b, b1, 0);
	k[1] = ch[result];
	result = f1_f2(b, b1, 1);
	k[2] = ch[result];
	result = f3(b, b1);
	k[3] = ch[result];
	result = f4(b, b1);
	k[4] = ch[result];
	result = f5(b[0]);
	k[5] = ch[result];
	k[6] = '\0';
	printf("%s\n", k);
	return (0);
}

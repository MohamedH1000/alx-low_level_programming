#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
/**
 * sum - to obtain random password
 * @s : Define string
 * Return: sum
 */
unsigned long sum(char *s)
{
	unsigned long summ = 0;

	while (*s != 0)
	{
		summ += *s;
		s++;
	}
	return (summ);
}
/**
 * main - prints passwords for crackme
 * Return: Always 0
 */
int main(void)
{
	char alpha[] = "abcdefghijklmnoqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char s[33];
	unsigned long summ;
	int i, flag = 0;

	srand(time(NULL));
	while (flag == 0)
	{
		for (i = 0; i < 33; i++)
		{
			s[i] = alpha[rand() % (sizeof(alpha) - 1)];
		}
		s[i] = '\0';
		summ = sum(s);
		if (summ == 2772)
		{
			flag = 1;
			printf("%s", s);
		}
	}
	return (0);
}

#include <stdio.h>
#include <math.h>
/**
  * main - Prints the largest prime factor of the number 612852475143
  * Return: Always 0 (Success)
  */
int main(void)
{
	long i, maxf;
	long num = 612852475143;
	double sq = sqrt(num);

	for (i = 1; i <= sq; i++)
	{
		if (num % i == 0)
		{
			maxf = num / i;
		}
	}

	printf("%ld\n", maxf);

	return (0);
}

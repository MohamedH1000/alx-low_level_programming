#include "hash_tables.h"
/**
 * hash_djb2 - djb2 algorithm to be achieved by this function
 * @str: hash this tring
 * Return: value that has been hashed
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int has;
	int a;

	has = 5381;
	while ((a = *str++))
		has = ((has << 5) + has) + a;
	return (has);
}

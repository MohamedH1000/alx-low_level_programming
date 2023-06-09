#include "hash_tables.h"
/**
 * key_index -the index of a key to be given
 * @key: value pair or you can say key of key
 * @size: the hash table size array
 * Return: the index to be returned
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

#include "hash_tables.h"
/**
 * hash_table_get - a value associated with a key to be retrieved
 * @ht: a hash table
 * @key: retrieve a value by the key to be used
 * Return: NULL if key not found and return value in case of a value
 * associated with key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];

	if (temp == NULL)
		return (NULL);

	while (strcmp(temp->key, key) != 0)
		temp = temp->next;

	if (temp == NULL)
		return (NULL);

	return (temp->value);
}

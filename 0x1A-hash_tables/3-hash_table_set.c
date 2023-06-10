#include "hash_tables.h"
/**
 * hash_table_set - hash element table to be added to
 * @ht: to add to hash table
 * @key: add key
 * @value: key value to be stored
 * Return: 0 in case of fail and 1
 * in case of success
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *np, *temp;
	unsigned long int index;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];

	if (temp != NULL)
	{
		while (temp)
		{
			if (strcmp(temp->key, key) == 0)
			{
				temp->value = strdup(value);
				return (1);
			}
			temp = temp->next;
		}
	}

	np = malloc(sizeof(hash_node_t));
	if (np == NULL)
		return (0);

	np->key = strdup(key);
	np->value = strdup(value);
	np->next = NULL;

	if (ht->array[index] != NULL)
		np->next = ht->array[index];

	ht->array[index] = np;

	return (1);
}

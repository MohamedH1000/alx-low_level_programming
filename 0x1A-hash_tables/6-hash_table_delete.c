#include "hash_tables.h"
/**
 * hash_table_delete - hash table given to be deleted
 * @ht: a hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp, *prv;
	unsigned long int size, a;

	if (ht == NULL)
		return;
	if (ht->array == NULL)
	{
		free(ht);
		return;
	}

	for (a = 0, size = ht->size; a < size; a++)
	{
		temp = ht->array[a];
		while (temp)
		{
			prv = temp;
			temp = temp->next;
			free(prv->key);
			free(prv->value);
			free(prv);
		}
	}

	free(ht->array);
	free(ht);
}

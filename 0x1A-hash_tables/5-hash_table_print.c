#include "hash_tables.h"
/**
 * hash_table_print - a function that hash table to be printed
 * @ht: a hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int a;
	int tgl;

	if (ht == NULL)
		return;

	printf("{");

	for (a = 0, tgl = 0; a < ht->size; a++)
	{
		temp = ht->array[a];
		if (temp != NULL)
		{
			if (tgl == 1)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			while ((temp = temp->next) != NULL)
			{
				printf(", ");
				printf("'%s': '%s'", temp->key, temp->value);
			}

			tgl = 1;
		}
	}
	printf("}\n");
}

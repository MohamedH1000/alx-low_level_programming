#include "hash_tables.h"
/**
 * hash_table_create - a function that create a has table
 * @size: array size
 * Return: Null in case of error and new has table in case
 * of success
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *has;
	unsigned long int a;

	if (size == 0)
		return (NULL);

	has = malloc(sizeof(hash_table_t));
	if (has == NULL)
		return (NULL);

	has->array = malloc(sizeof(hash_node_t *) * size);
	if (has->array == NULL)
	{
		free(has);
		return (NULL);
	}
	has->size = size;

	for (a = 0; a < size; a++)
		has->array[a] = NULL;

	return (has);
}

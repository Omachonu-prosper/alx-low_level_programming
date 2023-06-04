#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: pointer to the newly created hash table
 * Null otherwise
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table = malloc(sizeof(hash_table_t));
	hash_node_t **array = calloc(size, sizeof(hash_node_t));

	if (!table || !array)
		return (NULL);

	table->size = size;
	table->array = array;

	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	return (table);
}

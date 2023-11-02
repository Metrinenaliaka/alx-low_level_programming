#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of hash table
 * Return: pointer to hash table or NULL
 *
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_table;
	unsigned long int i;

	if (size < 1)
		return (NULL);
	h_table = malloc(sizeof(hash_table_t));
	h_table->size = size;
	if (h_table == NULL)
	{
		return (NULL);
	}
	h_table->array = malloc(sizeof(hash_node_t *) * size);
	if (h_table->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		h_table->array[i] = NULL;
	}
	return (h_table);
}

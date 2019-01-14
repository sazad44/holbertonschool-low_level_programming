#include "hash_tables.h"

/**
 * hash_table_create - creates hash table based on size provided
 * @size: the size of the hash table to be initialized
 * Return: a pointer to the start of the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ret = NULL;

	if (size > 0)
	{
		ret = malloc(sizeof(hash_table_t));
		if (ret == NULL)
			return (NULL);
		ret->size = size;
		ret->array = malloc(sizeof(hash_node_t*) * size);
		if (ret->array == NULL)
			return (NULL);
	}
	else
		return (NULL);
	return (ret);
}

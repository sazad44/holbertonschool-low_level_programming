#include "hash_tables.h"

/**
 * shash_table_create - creates hash table based on size provided
 * @size: the size of the shash table to be initialized
 * Return: a pointer to the start of the shash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned int i = 0;
	shash_table_t *ret = NULL;

	if (size > 0)
	{
		ret = malloc(sizeof(shash_table_t));
		if (ret == NULL)
			return (NULL);
		ret->size = size;
		ret->array = malloc(sizeof(shash_node_t *) * size);
		if (ret->array == NULL)
			return (NULL);
		for (i = 0; i < size; i++)
			*((ret->array) + i) = NULL;
		ret->shead = ret->array[0];
		ret->stail = ret->array[1023];
	}
	else
		return (NULL);
	return (ret);
}

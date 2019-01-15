#include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table completely
 * @ht: a pointer to the hash table
 * Return: No Value
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp;
	hash_node_t *node = NULL;
	unsigned int i = 0;

	for (i = 0; i < ht->size; i++)
		for (node = ht->array[i]; node; node = node->next)
		{
			if (temp)
				free(temp);
			temp = node;
}

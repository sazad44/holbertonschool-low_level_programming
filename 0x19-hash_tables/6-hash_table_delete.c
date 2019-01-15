#include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table completely
 * @ht: a pointer to the hash table
 * Return: No Value
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp = NULL;
	hash_node_t *node = NULL;
	unsigned int i = 0;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] && !(ht->array[i]->next))
		{
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			continue;
		}
		else if (ht->array[i] && ht->array[i]->next)
		{
			for (node = ht->array[i]; node; node = node->next)
			{
				if (temp)
				{
					free(temp->key);
					free(temp->value);
					free(temp);
				}
				temp = node;
			}
		}
	}
	if (temp)
	{
		free(temp->key);
		free(temp->value);
		free(temp);
	}
	if (ht->array)
		free(ht->array);
	free(ht);
}

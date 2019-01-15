#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: a pointer to the hash table to print
 * Return: No Value
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned int i = 0, flag = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			for (node = ht->array[i]; node; node = node->next)
			{
				if (flag == 1)
					printf(", ");
				printf("'%s': '%s'", node->key, node->value);
				flag = 1;
			}
		}
	}
	printf("}\n");
}

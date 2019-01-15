#include "hash_tables.h"

/**
 * hash_table_set - adds an element to a hash table
 * @ht: the hash table to access and add to
 * @key: the key to which the value will be linked
 * @value: the value to map to the key
 * Return: 1 for success Otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int ofs = 0;
	hash_node_t *new_node = NULL, *temp = NULL;

	if (!ht || !key || !value || !strcmp(key, ""))
		return (0);
	ofs = (hash_djb2((const unsigned char *)key) % ht->size);
	if (ht->array[ofs] && !strcmp(ht->array[ofs]->key, key))
	{
		if (ht->array[ofs]->value)
			free(ht->array[ofs]->value);
		ht->array[ofs]->value = strdup(value);
		return (1);
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;
	if (ht->array[ofs])
	{
		temp = ht->array[ofs];
		ht->array[ofs] = new_node;
		ht->array[ofs]->next = temp;
	}
	else
		ht->array[ofs] = new_node;
	return (1);
}

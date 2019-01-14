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
	hash_node_t *new_node = NULL;

	ofs = (hash_djb2((const unsigned char *)key) % ht->size);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = (char *)key;
	new_node->value = (char *)value;
	new_node->next = NULL;
	if ((*(ht->array)) && (*(ht->array) + ofs)->value)
	{
		new_node->next = (*(ht->array));
		(*(ht->array)) = new_node;
	}
	else
		*((ht->array) + ofs) = new_node;
	return (1);
}

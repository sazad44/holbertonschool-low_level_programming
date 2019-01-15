#include "hash_tables.h"

/**
 * hash_table_get - gets a value associated with a key
 * @ht: a pointer to the hash table struct to be dealt with
 * @key: a key to the value being retrieved
 * Return: a pointer to the sought after value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp = NULL;
	unsigned int ofs = 0;
	char *comp;
	char *ret = NULL;

	if (!ht || !key || !strcmp("", key))
		return (NULL);
	ofs = hash_djb2((const unsigned char *)key) % ht->size;
	if (ht->array[ofs])
		comp = ht->array[ofs]->key;
	else
		return (NULL);
	for (temp = ht->array[ofs]; temp; temp = temp->next)
	{
		if (!strcmp(key, comp))
		{
			ret = temp->value;
			return (ret);
		}
		else
			comp = ht->array[ofs]->next->key;
	}
	return (NULL);
}

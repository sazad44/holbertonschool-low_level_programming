#include "hash_tables.h"

/**
 * hash_table_get - gets a value associated with a key
 * @ht: a pointer to the hash table struct to be dealt with
 * @key: a key to the value being retrieved
 * Return: a pointer to the sought after value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int ofs = 0;
	char *comp;
	char *ret = NULL;

	ofs = hash_djb2((const unsigned char *)key) % ht->size;
	if (ht->array[ofs])
		comp = ht->array[ofs]->key;
	else
		return (NULL);
	while (1)
	{
		if (!strcmp(key, comp))
		{
			ret = ht->array[ofs]->value;
			return (ret);
		}
		else
			comp = ht->array[ofs]->next->key;
	}
	return (NULL);
}

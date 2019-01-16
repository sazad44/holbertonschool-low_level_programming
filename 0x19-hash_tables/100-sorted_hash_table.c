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

/**
 * shash_table_set - adds an element to a hash table
 * @ht: the hash table to access and add to
 * @key: the key to which the value will be linked
 * @value: the value to map to the key
 * Return: 1 for success Otherwise 0
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned int ofs = 0;
	shash_node_t *new_node = NULL, *temp = NULL;

	if (!ht || !key || !value || !strcmp(key, ""))
		return (0);
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			if (ht->array[i]->key[0] > key[0]
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

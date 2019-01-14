#include "hash_tables.h"

/**
 * key_index - finds an index based on the key for the value to be stored
 * @key: the key to the value trying to be stored
 * @size: the size of the hash array
 * Return: the index at which the key value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int ret = 0;

	ret = hash_djb2(key) % size;
	return (ret);
}

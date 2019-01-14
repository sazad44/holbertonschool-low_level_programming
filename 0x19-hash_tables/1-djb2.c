#include "hash_tables.h"

/**
 * hash_djb2 - hashes a given value to a key by calculating an index
 * @str: the value to be hashed and converted to an index
 * Return: an integer that represents the index of the value in the array
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}

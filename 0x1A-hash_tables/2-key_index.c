#include "hash_tables.h"

/**
 * key_index - gives me the index of a key.
 * @key: the key
 * @size: size of array
 * Return: inddex of a key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	if (size == 0)
		return (0);
	hash = hash_djb2((unsigned char *)key);
	return (hash % size);
}

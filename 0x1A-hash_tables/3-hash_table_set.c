#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: is the hash table you want to add or update the key/value to
 * @key: is the key. key can not be an empty string
 * @value: s the value associated with the key. value must be duplicated.
 * value can be an empty string
 * Return: 0 or 1
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *node = NULL;
	unsigned int i = 0;

	if (!ht || strcmp(key, "") == 0 || !key || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i] != NULL; i++)
	{
		if (!strcmp(ht->array[i]->key, key))
		{
			free(ht->array[i]->value);
			ht->array[i]->value = strdup(value);
			return (1);
		}
	}

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		free(node);
		return (0);
	}
	node->key = strdup(key);
	node->value = strdup(value);
	ht->array[index] = node;

	return (1);

}

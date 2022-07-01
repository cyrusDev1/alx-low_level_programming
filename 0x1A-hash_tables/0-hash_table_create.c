#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: size of table
 * Return: adresse of table or NULL
 */

hash_table_t *hash_table_create(unsigned int size)
{
    hash_table_t *ht = NULL;
    unsigned int i = 0;

    ht = malloc(sizeof(hash_table_t));
    if (ht == NULL || size <= 0)
    {
        free(ht);
        return (NULL);
    }
    ht->size = size;
    ht->array = malloc(sizeof(hash_table_t *) * ht->size);
    if (ht->array == NULL)
        return (NULL);
    for (i = 0; i < ht->size; i++)
        ht->array[i] = NULL;
    return (ht);
}

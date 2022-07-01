#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: hash tble
 * Return: no return
 */

void hash_table_delete(hash_table_t *ht)
{
    unsigned long int i = 0;
    hash_node_t *node;
    hash_table_t *head = ht;
    hash_node_t *temp;

    for (i = 0; i < ht->size; i++)
    {
        if (ht->array[i] != NULL)
        {
            node = ht->array[i];
            while (node != NULL)
            {
                temp = node->next;
                free(node->key);
                free(node->value);
                free(node);
                node = temp;
            }
        }
    }
    free(head->array);
    free(head);
}

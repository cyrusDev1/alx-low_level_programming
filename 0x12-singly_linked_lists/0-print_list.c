#include "lists.h"

/**
 * print_list - prints all elements of a list_h
 * @h: list to printed
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t num_node = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		num_node++;
	}
	return (num_node);
}

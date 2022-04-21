#include "lists.h"

/**
 * list_len - number of elements
 * @h: list
 * Return: return number of elements
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}

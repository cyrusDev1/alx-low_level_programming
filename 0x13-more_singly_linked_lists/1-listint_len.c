#include "lists.h"

/**
 * listint_len - number of elements
 * @h: list to count
 * Return: return number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *other = h;

	while (other)
	{
		count++;
		other = other->next;
	}
	return (count);
}

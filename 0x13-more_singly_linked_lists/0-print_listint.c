#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 * @h: list to print
 * Return: return number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t number = 0;
	const listint_t *head = h;

	while (head)
	{
		printf("%d\n", head->n);
		head = head->next;
		number++;
	}
	return (number);
}

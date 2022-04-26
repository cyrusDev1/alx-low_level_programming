#include "lists.h"

/**
 * print_listint_safe - prints a linked list
 * @head: list to printed
 * Return: return number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t n = 0;
	long int cursor;

	while (head)
	{
		cursor = head - head->next;
		printf("[%p] %d\n", (void *)head, head->n);
		if (cursor > 0)
		{
			head = head->next;
		}
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (n);
}

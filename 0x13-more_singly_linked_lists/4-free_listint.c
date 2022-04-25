#include "lists.h"

/**
 * free_listint_t - frees a listint_t list
 * @head: list to free
 * Return: return nothing
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
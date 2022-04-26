#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: list
 * Return: return pointer to the first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prec = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prec;
		prec = *head;
		*head = next;
	}
	*head = prec;
	return (*head);
}

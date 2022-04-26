#include "lists.h"

/**
 * pop_listint - deletes the node of a linked list
 * @head: pointer to pointer
 * Return: the head node's data(n)
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *tmp;

	if (*head == NULL)
		return (0);
	tmp = (*head)->next;
	data = (*head)->n;
	free(*head);
	*head = tmp;
	return (data);
}

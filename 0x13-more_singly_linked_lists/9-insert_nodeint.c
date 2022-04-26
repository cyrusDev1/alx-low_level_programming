#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at given position
 * @head: pointer to pointer
 * @idx: position
 * @n: value
 * Return: address of a new value or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *tmp = *head;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL || head == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (tmp != NULL && i < idx)
	{
		if (i == idx - 1)
		{
			new->next = tmp->next;
			tmp->next = new;
			return (new);
		}
		else
			tmp = tmp->next;
		i++;
	}
	return (NULL);
}

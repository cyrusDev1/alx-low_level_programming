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
	listint_t *prec = *head;
	listint_t *cur = *head;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		return (new);
	}
	while (cur != NULL && i < idx)
	{
		i++;
		prec = cur;
		cur = cur->next;
	}
	if (cur == NULL)
		return (NULL);
	prec->next = new;
	new->next = cur;
	return (new);
}

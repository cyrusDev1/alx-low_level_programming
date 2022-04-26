#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked at position
 * @head: pointer to the first elm
 * @index: position
 * Return: 1 or -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp = *head;
	listint_t *cur = NULL;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	while (i < index - 1)
	{
		if(tmp == NULL || !(tmp->next))
			return (-1);
		tmp = tmp->next;
		i++;
	}
	cur = tmp->next;
	tmp->next = cur->next;
	free(cur);
	return (1);
}

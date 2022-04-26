#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: list
 * @index: index of element to printed
 * Return: nth node or null
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp = head;

	while (tmp != NULL && i < index)
	{
		tmp = tmp->next;
		i++;
	}
	if (tmp == NULL)
		return (NULL);
	else
		return (tmp);
}

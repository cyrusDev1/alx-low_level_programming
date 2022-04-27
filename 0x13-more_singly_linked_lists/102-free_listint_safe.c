#include "lists.h"

/**
 * _check_and_free - free a list
 * @head: of the list
 * @prev: prev node in the list
 * Return: number of nodes
 */

int check_free(listint_t *head, listint_sf *prev)
{
	listint_sf node, *tmp;
	int count;

	if (head->next == NULL)
	{
		free(head);
		return (1);
	}

	node.next = prev;
	node.data = head;
	tmp = node.next;
	while (tmp != NULL && tmp->data != head)
		tmp = tmp->next;
	if (tmp != NULL)
		return (0);

	count = 1;
	count += check_free(head->next, &node);
	free(head);
	return (count);
}

/**
 * free_listint_safe - free a listint_t safely
 * @h: head of list
 * Return: size of list free'd
 */

size_t free_listint_safe(listint_t **h)
{
	int t;

	if (*h == NULL)
		return (0);

	t = check_free(*h, NULL);
	*h = NULL;
	return (t);
}

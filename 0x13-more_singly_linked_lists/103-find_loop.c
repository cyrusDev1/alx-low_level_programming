#include "lists.h"

/**
 * _check_and_find - Check the list and return the looping node
 * @head: of list to check
 * @prev: prev node on the list
 *
 * Return: Node that loops, or NULL
 */

listint_t *_check_and_find(listint_t *head, listint_sf *prev)
{
	listint_sf node, *tmp;

	if (head->next == NULL)
		return (NULL);

	node.next = prev;
	node.data = head;
	tmp = node.next;
	while (tmp != NULL && tmp->data != head)
		tmp = tmp->next;
	if (tmp != NULL)
		return (head);

	return (_check_and_find(head->next, &node));
}

/**
 * find_listint_loop - find if list
 * @head: of the list
 * Return: Node that loops, or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	if (head == NULL)
		return (NULL);

	return (_check_and_find(head, NULL));
}

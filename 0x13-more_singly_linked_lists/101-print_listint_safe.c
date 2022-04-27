#include "lists.h"

/**
 * _check_and_print - Check the list and print
 * @head: of newlist to check
 * @prev: node on list to check
 *
 * Return: number of nodes
 */

int check_print(const listint_t *head, listint_sf *prev)
{
	listint_sf node, *tmp;

	if (head->next == NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		return (1);
	}

	node.next = prev;
	node.data = head;
	tmp = node.next;
	while (tmp != NULL && tmp->data != head)
		tmp = tmp->next;
	if (tmp != NULL)
	{
		printf("-> [%p] %d\n", (void *)head, head->n);
		return (0);
	}
	printf("[%p] %d\n", (void *)head, head->n);
	return (1 + check_print(head->next, &node));
}

/**
 * print_listint_safe - Print a linkint_t with user error
 * @head: head of the string
 * Return: number of nodes in list
 */

size_t print_listint_safe(const listint_t *head)
{
	if (head == NULL)
		return (0);

	return (check_print(head, NULL));
}

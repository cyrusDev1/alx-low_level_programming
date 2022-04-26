#include "lists.h"

/**
 * sum_listint - sum of all data of a list
 * @head: list
 * Return: returns the sum
 */

int sum_listint(listint_t *head)
{
	listint_t *tmp = head;
	int sum = 0;

	if (tmp == NULL)
		return (0);
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}

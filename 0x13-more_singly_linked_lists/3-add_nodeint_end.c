#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of list
 * @head: pointer to pointer
 * @n: value
 * Return: NULL or adress
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tmp = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
}

#include "main.h"

/**
 * _strdup - creates a new strings
 * @str: parameter
 * Return: a pointer to the duplicated string or NULL
 */

char *_strdup(char *str)
{
	char *p;
	unsigned int len = 0, j;

	if (str == NULL)
		return (NULL);
	while (str[len])
		len++;
	p = malloc(sizeof(char) * (len + 1));
	if (p == NULL)
		return (NULL);
	for (j = 0; str[j]; j++)
		*(p + j) = *(str + j);
	return (p);
}

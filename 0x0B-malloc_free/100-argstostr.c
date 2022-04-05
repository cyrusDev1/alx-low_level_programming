#include "main.h"
#include <stdio.h>

/**
 * argstostr - concatenates all argc
 * @ac: number og arg
 * @av: array
 * Return: a pointer or NULL
 */

char *argstostr(int ac, char **av)
{
	char *string;
	int i, j, k = 0, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}
	string = malloc(sizeof(char) * (len + 1));
	if (string == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
		{
			string[k] = av[i][j];
		}
		string[k] = '\n';
		k++;
	}
	return (string);
}

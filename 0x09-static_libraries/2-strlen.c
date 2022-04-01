#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: parameter
 * Return: returns the length of a string
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i + 1);
}

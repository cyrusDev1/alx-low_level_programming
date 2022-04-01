#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares two strings
 * @s1: first parameter
 * @s2: second parameter
 * Return: return 0 or positive or nagative
 */

int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

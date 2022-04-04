#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: return a new string or NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int len1 = 0, len2 = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;
	concat = malloc(sizeof(char) * (len1 + len2 + 1));
	if (concat == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		*(concat + i) =  *(s1 + i);
	for (j = 0; s2[j]; j++, i++)
		*(concat + i) = *(s2 + j);
	return (concat);
}

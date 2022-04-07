#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - conacates two string
 * @s1: first parameter
 * @s2: second param
 * @n: third param
 * Return: NULL or concat string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_s1 = 0, len_s2 = 0;
	char *concat;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2  = "";
	while (s1[len_s1] != '\0')
		len_s1++;
	while (s2[len_s2] != '\0')
		len_s2++;
	if (n > len_s2)
	{
		n = len_s2;
		concat = malloc((len_s1 + 1 + len_s2) * sizeof(char));
	}
	else
		concat = malloc((len_s1 + n + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		*(concat + i) = *(s1 + i);
	for (j = 0; j < n; j++, i++)
		*(concat + i) = *(s2 + j);
	concat[i] = '\0';
	return (concat);
}

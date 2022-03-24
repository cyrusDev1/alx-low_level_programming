#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: number 1 to add
 * @n2: number 2 to add
 * @r: buffer
 * @size_r: size of buffer
 * Return: return result of adding
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, len_n1 = 0, len_n2 = 0;

	for (i = 0; n1[i] != '\0'; i++)
		len_n1++;

	for (i = 0; n2[i] != '\0'; i++)
		len_n2++;

	if (size_r <= len_n1 + 1 || size_r <= len_n2 + 1)
		return (0);

	n1 = n1 + len_n1 - 1;
	n2 = n2 + len_n2 - 1;
	*(r + size_r) = '\0';

	return (add_strings(n1, n2, r, --size_r));
}

/**
 * add_strings - Adds the numbers stored in two strings.
 * @n1: The string containing the first number to be added.
 * @n2: The string containing the second number to be added.
 * @r: The buffer to store the result.
 * @r_index: The current index of the buffer.
 * Return: return addition
 */

char *add_strings(char *n1, char *n2, char *r, int r_index)
{
	int num, tens = 0;

	for (; *n1 && *n2; n1--, n2--, r_index--)
	{
		num = (*n1 - '0') + (*n2 - '0');
		num = num + tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}

	for (; *n1; n1--, r_index--)
	{
		num = (*n1 - '0') + tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}

	for (; *n2; n2--, r_index--)
	{
		num = (*n2 - '0') + tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}

	if (tens && r_index >= 0)
	{
		*(r + r_index) = (tens % 10) + '0';
		return (r + r_index);
	}
	else if (tens && r_index < 0)
	       return (0);

	return (r + r_index + 1);	
}

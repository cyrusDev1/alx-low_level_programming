#include "main.h"
#include <stdio.h>

/**
 * _atoi - convert ascii to int
 * @s: parameter
 * Return: return int
 */

int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	unsigned int number = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign = -sign;
		else if (s[i] >= '0' && s[i] <= '9')
			number = number * 10 + (s[i] - '0');
		else if (number > 0)
			break;
		i++;
	}
	return (sign * number);
}

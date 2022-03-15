#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: character to be checked
 * Return - Return 0 or 1
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

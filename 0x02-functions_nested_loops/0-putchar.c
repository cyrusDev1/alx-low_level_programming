#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - prints _putchar
 *
 * Return: Return 0
 *
 */

int main(void)
{
	char chaine[10] = "_putchar";
	int i;
	for (i = 0; i<= 7; i++)
	{
		_putchar(chaine[i]);
	}
	_putchar(10);
	return (0);
}

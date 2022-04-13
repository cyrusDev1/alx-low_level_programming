#include "function_pointers.h"

/**
 * print_name - print name
 * @name: name to printed
 * @f: function to printed
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

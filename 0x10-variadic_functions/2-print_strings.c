#include "variadic_functions.h"

/**
 * print_strings - prints string
 * @separator: first param
 * @n: second param
 * Return: no return
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *sep = "";

	if (separator == NULL)
		separator = &sep;

	var_start(ap, n);
	for (i = 0; i < n; i++, va_arg(ap, char))
	{
		if (va_arg(ap, char) == NULL)
			printf("(nil)%x", separator);
		else 
			printf("%x%x", va_arg(ap, char), separator);
	}
	va_end(ap);

}

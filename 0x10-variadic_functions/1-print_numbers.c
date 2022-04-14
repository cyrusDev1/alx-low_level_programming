#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: first param
 * @n: second param
 * Return: no return
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int j;
	va_list ap;

	va_start(ap, n);
	for (j = 0; j < n; j++)
	{
		if (separator == NULL)
		{
			printf("%d", va_arg(ap, int));
		}
		else if (separator != NULL && j == 0)
		{
			printf("%d", va_arg(ap, int));
		}
		else
		{
			printf("%s%d", separator, va_arg(ap, int));
		}
	}
	printf("\n");
	va_end(ap);
}

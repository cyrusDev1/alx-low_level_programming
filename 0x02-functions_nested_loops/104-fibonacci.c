#include <stdio.h>
/**
 * main - prints the first 98 numbers of fibonacci
 * Return: 0
 */
int main(void)
{
	int i = 0;
	unsigned long int a = 0, b = 1, next = 0;
	unsigned long int c, d, follow, car;

	while (i <= 91)
	{
		next = a + b;
		a = b;
		b = next;
		printf("%lu, ", next);
		i++;
	}
	c = a % 1000;
	a = a / 1000;
	d = b % 1000;
	b = b / 1000;
	while (i <= 98)
	{
		car = (c + d) / 1000;
		follow = (c + d) - car * 1000;
		next = (a + b) + car;
		c = d;
		d = follow;
		a = b;
		b = next;
		if (follow >= 100)
			printf("%lu%lu", next, follow);
		else
			printf("%lu0%lu", next, follow);
		if (i != 98)
			printf(", ");
		i++;
	}
	putchar('\n');
	return (0);
}

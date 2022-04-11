#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - print a struct dog
 * @d: param
 * Return; no return
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
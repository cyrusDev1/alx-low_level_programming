#include "dog.h"
#include <stdlib.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: firts param
 * @age: second param
 * @owner: third param
 * Return: null or dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *temp_name;
	char *temp_owner;
	dog_t *dog;

	temp_name = malloc(sizeof(*name) * (strlen(name) + 1));
	temp_owner = malloc(sizeof(*owner) * (strlen(owner) + 1));
	dog = malloc(sizeof(dog_t));

	if (temp_name != NULL && temp_owner != NULL && dog != NULL)
	{
		strcpy(temp_name, name);
		strcpy(temp_owner, owner);
		dog->name = temp_name;
		dog->age = age;
		dog->owner = temp_owner;
	}
	else
	{
		free(temp_name);
		free(temp_owner);
		free(dog);
		return (NULL);
	}
	return (dog);
}

#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Short description
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef  for struct dog
 */
typedef struct dog dog_t;

#endif

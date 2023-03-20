#include "dog.h"

/**
 * init_dog - initializes struct dog
 * @d: pointer to struct dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		d = NULL;
	d->name = name;
	d->age = age;
	d->owner = owner;
}

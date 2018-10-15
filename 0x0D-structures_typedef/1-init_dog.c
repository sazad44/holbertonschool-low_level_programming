#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - initializes a variable of type struct dog
 * @d: a pointer to the structure being initialized
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 */
void init_dog(Dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(Dog));
		if (d == NULL)
			return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}

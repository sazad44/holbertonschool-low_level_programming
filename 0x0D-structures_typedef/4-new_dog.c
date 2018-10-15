#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of the new dog
 * @age: the age of the new dog
 * @owner: the owner of the new dog
 * Return: a pointer to the new dog structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	char *nam, *own;

	nam = name;
	own = owner;
	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);
	ndog->name = nam;
	ndog->age = age;
	ndog->owner = own;
	return (ndog);
}

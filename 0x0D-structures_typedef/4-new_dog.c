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
	int i = 0, lenn = 0, leno = 0;

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);
	if (name != NULL && owner != NULL)
	{
		while (name[i++])
			lenn++;
		i = 0;
		while (owner[i++])
			leno++;
		i = 0;
	}
	nam = malloc(sizeof(char) * (lenn + 1));
	own = malloc(sizeof(char) * (leno + 1));
	if (nam == NULL || own == NULL)
	{
		free(ndog), free(nam), free(own);
		return (NULL);
	}
	while (name[i])
	{
		nam[i] = name[i];
		i++;
	}
	nam[i] = name[i];
	i = 0;
	while (owner[i])
	{
		own[i] = owner[i];
		i++;
	}
	own[i] = owner[i];
	ndog->name = nam;
	ndog->age = age;
	ndog->owner = own;
	return (ndog);
}

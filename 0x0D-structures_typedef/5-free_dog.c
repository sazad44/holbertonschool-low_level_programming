#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - frees dogs
 * @d: the structure to free
 * Return: no value
 */
void free_dog(dog_t *d)
{
	free(d);
}

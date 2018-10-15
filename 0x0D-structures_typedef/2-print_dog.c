#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints a structure dog
 * @d: the structure to print
 * Return: no value
 */
void print_dog(Dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\n", d->name);
	if (d->age >= 0)
		printf("Age: %0.6f\n", d->age);
	else
		printf("Age: (nil)\n");
	printf("Owner: %s\n", d->owner);
}

#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: the amount of memory to be allocated
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ret;

	ret = malloc(b);
	if (ret == NULL)
	{
		exit (98);
	}
	return (ret);
}

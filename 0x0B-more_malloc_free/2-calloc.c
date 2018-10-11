#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements in the array
 * @size: size of the members in bytes
 * Return: a void pointer to the memory addresses of the array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ret;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ret = malloc(size * nmemb);
	if (ret == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
	{
		*((char *)ret + i) = 0;
		ret = (void *)ret;
	}
	return (ret);
}

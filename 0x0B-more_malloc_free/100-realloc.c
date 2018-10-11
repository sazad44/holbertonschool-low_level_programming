#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: the ptr whose memory to free
 * @old_size: the size of the memory block ptr points to
 * @new_size: the new size of the pointer being returned's block
 * Return: a pointer to the newly sized memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ret;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ret = malloc(new_size);
		if (ret == NULL)
			return (NULL);
		return (ret);
	}
	else if (new_size == 0)
		free(ptr);
	ret = malloc(new_size);
	if (ret == NULL)
		return (NULL);
	for (i = 0; i < new_size && i < old_size; i++)
		ret[i] = *((char *)ptr + i);
	free(ptr);
	ret = (void *)ret;
	return (ret);
}

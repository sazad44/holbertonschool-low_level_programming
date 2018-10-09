#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * alloc_grid - develop a multidimensional array
 * @width: the width of the array
 * @height: the height of the array
 * Return: a double pointer to a multidimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int **mda;
	int i, j;

	mda = malloc(sizeof(int) * height);
	for (i = 0; i < height; i++)
	{
		mda[i] = malloc(sizeof(int) * width);
		for (j = 0; j < width; j++)
		{
			mda[i][j] = 0;
		}
	}
	return (mda);
}

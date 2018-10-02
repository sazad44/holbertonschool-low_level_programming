#include "holberton.h"

/**
 * print_chessboard - prints the chessboard
 * @a: the multidimensional array to be printed
 * Return: no value
 */
void print_chessboard(char (*a)[8])
{
	int i, j, k;

	k = 0;
	while (a[k][k])
		k++;
	k -= 1;
	for (i = 0; i < k; i++)
	{
		for (j = 0; j < k; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}

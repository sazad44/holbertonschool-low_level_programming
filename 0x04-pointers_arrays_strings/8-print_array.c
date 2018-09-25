#include <stdio.h>

/**
 * print_array - print a certain number of elements in an array
 * @a: an array input to be printed
 * @n: number of elements of the array to be printed
 * Return: no value
 */
void print_array(int *a, int n)
{
	int i,j;

	while (a[i])
	{
		i++;
	}
	if (i > n)
		return;
	n -= 1;
	for (j = 0; j <= n; j++)
	{
		printf("%d", a[j]);
		if (j != n)
		{
			printf(", ");
		}
	}
	printf("\n");
}

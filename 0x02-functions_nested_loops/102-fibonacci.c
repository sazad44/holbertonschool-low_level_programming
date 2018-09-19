#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int i;
	int k;

	i = 1;
	j = 0;
        for (n = 0; n < 50; n++)
	{
		k = i + j;
		printf("%d, ", i);
		j = i;
		i = k;
	}

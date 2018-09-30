#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned int i = 0, j = 0, k = 0, total = 2;

	i = 2;
	j = 1;
	while (k <= 4000000)
	{
		k = i + j;
		if ((k % 2) == 0)
			total += k;
		j = i;
		i = k;
	}
	printf("%u\n", total);
	return (0);
}

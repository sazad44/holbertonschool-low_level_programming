#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned int i = 0, j = 0, k = 0;

	i = 1;
	j = 0;
	while (k <= 4000000)
	{
		k = i + j;
		if ((k % 2) == 0)
		{
			printf("%u", k);
			if (k != 3524578)
				printf(", ");
		}
		j = i;
		i = k;
	}
	printf("\n");
	return (0);
}

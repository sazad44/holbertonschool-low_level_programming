#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	long int i;
	long int j;
	long int k;

	i = 1;
	j = 0;
        for (n = 0; n < 49; n++)
	{
		k = i + j;
		printf("%li", k);
		if (n != 48)
			printf(", ");
		j = i;
		i = k;
	}
	putchar('\n');
	return (0);
}

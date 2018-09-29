#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int i = 1, i2, j = 2, j2, k = 0, k2 = 0, count = 0;

	printf("%lu, %lu, ", i, j);
	for (; count < 96; count++)
	{
		if (count > 89)
		{
			i2 = (i % 1000000000), j2 = (j % 1000000000);
			i = (i / 1000000000), j = (j / 1000000000);
			for (; count < 96; count++)
			{
				k = (i + j);
				k2 = (i2 + j2);
				if (k2 > 999999999)
				{
					k += (k2 / 1000000000);
					k2 %= 1000000000;
				}
				printf("%lu%lu", k, k2);
				i = j;
				j = k;
				i2 = j2;
				j2 = k2;
				if (count != 95)
					printf(", ");
			}
		}
		else
		{
			k = i + j;
			printf("%lu", k);
			i = j;
			j = k;
			if (count != 97)
				printf(", ");
		}
	}
	printf("\n");
	return (0);
}

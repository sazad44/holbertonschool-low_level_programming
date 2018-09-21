#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int n = 612852475143;
	long int i;
	long int j;
	long int x;

	for (i = 1; i <= (n / 2); i++)
	{
		if ((n % i) == 0)
		{
			/* n = n / i; */
			for (j = 2; j < i; j++)
			{
				if (i % j == 0)
					break;
				else if (j == i - 1)
					x = i;
				printf("%li %li %li \n", i, j, x);
			}
		}
	}
	printf("%li\n", x);
	return (0);
}

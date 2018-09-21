#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int n = 612852475143;
	long int i;

	while((n % 2) == 0)
	{
		n = (n / 2);
	}
	for (i = 3; i <= sqrt(n); i += 2)
	{
		while ((n % i) == 0)
		{
			n = (n / i);
		}
	}
	printf("%li\n", n);
	return (0);
}

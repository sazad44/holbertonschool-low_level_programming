#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i=0, sum = 0, val = 2772;
	char pass[44];

	while (sum != 2772)
	{
		srand((unsigned int)(time(NULL)));
		while (val > 0)
		{
			pass[i] = 33 + rand() % 94;
			sum = sum + pass[i];
			val -= pass[i];
			if (val < 0)
			{
				pass[i] += val;
				sum += val;
			}
			i++;
		}
		pass[i] = '\0';
	}
	printf("%s\n", pass);
	return (0);
}

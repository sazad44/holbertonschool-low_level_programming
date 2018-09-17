#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;
	int y;
	int z;
	int n;

	for (x = '0'; x <= '9'; x++)
	{
		for (y = '0'; y <= '8'; y++)
		{
			for (z = '0'; z <= '9'; z++)
			{
				for (n = '0'; n <= '9'; n++)
				{
					if (x == '0' && y == '0' && z == '0' && n == '0')
						continue;
					else if (x >= z && y >= n)
						continue;
					else
					{
					putchar(x);
					putchar(y);
					putchar(' ');
					putchar(z);
					putchar(n);
					}
					if (x == '9' && y == '8' && z == '9' && n == '9')
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

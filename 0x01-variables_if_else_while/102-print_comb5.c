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
		for (y = '0'; y <= 8; y++)
		{
			for (z = '0'; z <= '9'; z++)
			{
				for (n = '0'; n <= '9'; n++)
				{
					putchar(x);
					putchar(y);
					putchar(' ');
					putchar(z);
					if (x == y == z == '0')
						continue;
					putchar(n);
					putchar(',');
					putchar(' ');
					

#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	int k;

	i = 1;
	j = 0;
	while (k <= 4000000)
	{
		k = i + j;
		if ((k % 2) == 0

#include "holberton.h"

/**
 * puts_half - prints the second half of the string input into the function
 * @str: string input to be half printed
 * Return: no value
 */
void puts_half(char *str)
{
	int n, i;

	n = 0;
	while (str[n])
	{
		n++;
	}
	if ((n % 2) == 0)
	{
		i = (n / 2);
		n -= 1;
	}
	else
	{
		n -= 1;
		i = ((n + 2) / 2);
	}
	for (; i <= n; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

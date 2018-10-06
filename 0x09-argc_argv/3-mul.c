#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: the number of arguments, including program name, presented to program
 * @argv: a double pointer pointing to an array of the arguments passed
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int ans, n, i;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	i = atoi(argv[2]);
	ans = (n * i);
	printf("%d\n", ans);
	return (0);
}

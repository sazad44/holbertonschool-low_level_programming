#include <stdio.h>

/**
 * main - Entry point
 * @argc: the number of arguments passed to the program including its name
 * @argv: a pointer to a pointer to the array of arguments passed
 * Return: ALways 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argc, (void)argv;
	printf("%d\n", (argc - 1));
	return (0);
}

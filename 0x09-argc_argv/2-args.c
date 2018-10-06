#include <stdio.h>

/**
 * main - Entry point
 * @argc: the number of arguments passed to the program including its own name
 * @argv: a pointer to a pointer to the array of the program's arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	(void)argc;
	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}

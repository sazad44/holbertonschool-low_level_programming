#include <stdio.h>

/**
 * main - Entry point
 * @argc: the number of arguments passed to the program including its own name
 * @argv: a pointer to the pointer to the array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}

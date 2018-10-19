#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 * @argc: the number of arguments passed to the program
 * @argv: an array of pointers pointing to the strings of arguments input
 * Return: Always 0 (Success)
 */
int main(int argc, int **argv)
{
	int nofb;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	nofb = *argv[1];
	if (nofb < 0)
	{
		printf("Error\n");
		exit(2);
	}
	return (0);
}

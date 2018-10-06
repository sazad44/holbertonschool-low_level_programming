#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: the number of arguments including the program name passed
 * @argv: the elements passed to the proram in the terminal
 * Return: 0 for issue and 1 for error and addition of numbers
 */
int main(int argc, char *argv[])
{
	int n = 0, i = 0, ans = 0;

	for (; i < argc; i++)
	{
		if (*argv[i] >= '0' && *argv[i] <= '9')
		{
			n = atoi(argv[i]);
			ans += n;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", ans);
	if (argc == 1)
	{
		ans = 0;
		printf("%d\n", ans);
	}
	return (0);
}

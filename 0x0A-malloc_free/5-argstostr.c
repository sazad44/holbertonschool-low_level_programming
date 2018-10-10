#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: number of arguments
 * @av: the arguments passed to the function
 * Return: character pointer to arguments of program
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, len = 0;
	char *newstr;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
	}
	len += ac;
	newstr = malloc(sizeof(char) * len + 1);
	if (newstr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] ; j++)
			newstr[k++] = av[i][j];
		newstr[k++] = '\n';
	}
	return (newstr);
}

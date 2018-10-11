#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings up to a number of bytes
 * @s1: the first string to lead the returned string
 * @s2: the string to be concatenated to s1
 * @n: the number of bytes of string 2 to copy
 * Return: a pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j = 0, count1 = 0, count2 = 0;
	char *ret;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		count1 += 1;
	for (i = 0; s2[i]; i++)
		count2 += 1;
	if (count2 > n)
		count2 = n;
	ret = malloc(sizeof(char) * (count1 + count2 + 1));
	if (ret == NULL)
		return (NULL);
	for (i = 0; i < count1; i++)
		ret[j++] = s1[i];
	for (i = 0; i < count2; i++)
		ret[j++] = s2[i];
	ret [j] = '\0';
	return (ret);
}

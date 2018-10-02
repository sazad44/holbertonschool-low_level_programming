#include "holberton.h"

/**
 * set_string - set the value of a pointer to a char
 * @s: the pointer to a pointer to get the char from
 * @to: the pointer to change the value of
 *Return: no value
 */
void set_string(char **s, char *to)
{
	*s = to;
}

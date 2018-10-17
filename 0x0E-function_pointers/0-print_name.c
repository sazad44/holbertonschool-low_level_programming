#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: the name to be printed
 * @f: the function pointer that points to the function to be used
 * Return: No Value
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

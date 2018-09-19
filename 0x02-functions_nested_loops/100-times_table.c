#include "holberton.h"

/**
 * print_times_table - print times table from 0 to 9
 *
 * @n: the variable being input for table size
 * Return: No return
 */
void print_times_table(int n)
{
	if (n < 0 || n > 15)
	{
		int i;
		int x;
		int y;

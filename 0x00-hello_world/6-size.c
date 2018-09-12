#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int n;
	unsigned long int l;
	long long int d;
	float f;

	printf("Size of a char: %u byte(s)\n", sizeof(c));
	printf("Size of an int: %u byte(s)\n", sizeof(n));
	printf("Size of a long int: %u byte(s)\n", sizeof(l));
	printf("Size of a long long int: %u byte(s)\n", sizeof(d));
	printf("Size of a float: %u byte(s)\n", sizeof(f));
	return (0);
}

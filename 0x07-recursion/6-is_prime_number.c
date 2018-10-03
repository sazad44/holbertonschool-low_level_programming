#include "holberton.h"

/**
 * is_prime_number - check if the input is a prime number, if so return 1
 * @n: the number to be checked for the attribute of prime
 * Return: 1 if prime, or 0 if not
 */
int is_prime_number(int n)
{
	int x = 2;

	if (n <= 1)
		return (0);
	return (is_prime_helper(n, x));
}

/**
 * is_prime_helper - adds variable to be able to determine if number is prime
 * @n: the number whose prime attribute is to be determined
 * @x: the numer that will test if n is divisible
 * Return: x
 */
int is_prime_helper(int n, int x)
{
	if (((n % x) == 0) && (n > x))
		return (0);
	else if (n < x)
		return (1);
	return (is_prime_helper(n, (x + 1)));
}

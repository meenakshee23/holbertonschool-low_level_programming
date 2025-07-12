#include "main.h"
/**
 * check_prime - checks if n is divisible by i
 * @n: the number
 * @i: the current number to test
 *
 * Return: 1 if prime, 0 if not
 */
int check_prime(int n, int i)
{
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (check_prime(n, i + 1));
}

/**
 * is_prime_number - tells if a number is prime
 * @n: the number
 *
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(n, 2));
}


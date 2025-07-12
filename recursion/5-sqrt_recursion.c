#include "main.h"
/**
 * find_sqrt - helps to find the square root of n
 * @n: the number
 * @guess: the number to try
 *
 * Return: the square root, or -1 if none
 */
int find_sqrt(int n, int guess)
{
	if (guess * guess > n)
		return (-1);
	if (guess * guess == n)
		return (guess);
	return (find_sqrt(n, guess + 1));
}
/**
 * _sqrt_recursion - gets the natural square root of a number
 * @n: the number
 *
 * Return: square root, or -1 if not a perfect square
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_sqrt(n, 0));
}

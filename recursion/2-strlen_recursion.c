#include "main.h"
/**
 * _strlen_recursion - finds the length of a string
 * @s: the string to count
 *
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

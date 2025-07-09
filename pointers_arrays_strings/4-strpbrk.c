#include "main.h"
#include <stddef.h> /* For NULL */
/**
 * _strpbrk - finds the first matching character in accept
 * @s: the string to search
 * @accept: the characters to match
 *
 * Return: pointer to the first mstch in s, or NULL if no match
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}

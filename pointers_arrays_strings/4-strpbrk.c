#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - searchesba string for any of a set of bytes
 * @s: the string to search
 * @accept: the bytes to match
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

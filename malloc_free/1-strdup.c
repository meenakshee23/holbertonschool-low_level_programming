#include "main.h"
#include <stdlib.h>
/**
 * _strdup -pointer to a new string which is a duplicate of the string
 * @str: the original string
 *
 * Return: NULL if str = NULL
 */
char *_strdup(char *str)
{
	char *s;
	int len = 0;
	int i;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;
	s = malloc(len + 1);
	if (s == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		s[i] = str[i];

	return (s);
}

#include "main.h"
#include <stdlib.h>
/**
 * str_concat - joins two strings together into new memory
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the new combined string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str;
	int len1 = 0, len2 = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	new_str = malloc(sizeof(char) * (len1 + len2 + 1));
	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		new_str[i] = s1[i];

	for (j = 0; j < len2; j++)
		new_str[len1 + j] = s2[j];

	new_str[len1 + len2] = '\0';

	return (new_str);
}


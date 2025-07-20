#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from s2
 *
 * Return: pointer to new string, or NULL if it fails
 *
 * Description: makes a new string with s1 followed by
 * the first n chars of s2 (or all of s2 if shorter).
 * NULL inputs are treated as empty strings.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i, j;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	if (n > len2)
		n = len2;

	p = malloc(len1 + n + 1);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		p[i] = s1[i];
	for (j = 0; j < n; j++)
		p[len1 + j] = s2[j];

	p[len1 + n] = '\0';
	return (p);
}


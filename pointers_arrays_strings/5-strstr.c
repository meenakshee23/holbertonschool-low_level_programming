#include "main.h"
#include <stddef.h> /* For NULL */
/**
 * _strstr - finds the first occurrence of the substring
 * @haystack: The string to search
 * @needle: The substring to find
 *
 * Return: pointer to the start of the substring, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (*needle == '\0')
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (needle[j] == '\0')
			return (&haystack[i]);
	}
	return (NULL);
}

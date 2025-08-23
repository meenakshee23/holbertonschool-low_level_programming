#include "main.h"

/**
 * rev_string - Reverses a string in place
 * @s: the string to reverse
 */
void rev_string(char *s)
{
	int i = 0;
	int j;
	char temp;

	while (s[i] != '\0')
		i++;

	i--;

	for (j = 0; j < i; j++, i--)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
	}
}

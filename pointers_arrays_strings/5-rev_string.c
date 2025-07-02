#include "main.h"

/**
 * rev_string - reverses a string in place
 * @s: pointer to the string to be reversed
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char temp;

	/* Find the length of the string */
	while (s[j] != '\0')
	{
		j++;
	}
	j--; /* Move to the last valid index */

	/* Swap characters from both ends */
	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}

#include "main.h"
/**
 * leet - encode a string into 1337
 *
 * Return: pointer to the modified string
 */
char *leet(char *)
{
	char *letters = "aAeEoOtTlL";
	char *numbers = "4433007711";
	int i = 0, j;

	while (s[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = numbers[j];
			}
		}
		i++;
	}
	return s;
}

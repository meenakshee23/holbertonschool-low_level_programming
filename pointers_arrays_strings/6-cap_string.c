#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: the string to modify
 *
 * Return: pointer to the modified string
 */
char *cap_string(char *str)
{
	int i = 0, j;
	char sep[] = " \t\n,;.!?\"(){}";

	/* Capitalize the first character if it's a letter */
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;

	while (str[i])
	{
		for (j = 0; sep[j]; j++)
		{
			if (str[i] == sep[j] && str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] -= 32;
				break;
			}
		}
		i++;
	}

	return (str);
}


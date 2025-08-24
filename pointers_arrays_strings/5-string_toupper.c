#include "main.h"
/**
 * string_toupper - changes all lowercase letters to uppercase
 * @str: string to modify
 *
 * Return: pointer to the modified string
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - ('a' - 'A');
		i++;
	}

	return (str);
}

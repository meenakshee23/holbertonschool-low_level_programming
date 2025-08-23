#include "main.h"
/**
 * _strcpy - copies a string from src to dest
 * @dest: where the string will be copied to
 * @src: the string to copy
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars and initializes it with char
 * @size: how many characters to allocate
 * @c: the character to fill the array with
 *
 * Return: pointer to the array, or NULL if it fails or size is 0
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}


#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocacates for an array using malloc
 * @nmemb: num of elements
 * @size: size of each element
 *
 * Return: pointer to allocated memory, or NULL if it fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
	{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;

	return (p);
}



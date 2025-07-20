#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked- allocates memory using malloc
 * @b: size in bytes
 *
 * Return: pointer to allocated memory
 * if malloc fails, exit with status 98
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}


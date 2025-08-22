#include "main.h"
/**
 * swap_int - swap two integers
 * @a: pointer to first integer
 * @b: pointer to sencond integer
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}


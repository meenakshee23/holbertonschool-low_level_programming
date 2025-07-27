#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - run a function on each array element
 * @array: the array
 * @size: how many elements
 * @action: function to run on each element
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}


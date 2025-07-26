#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - prints a name using a function pointer
 * @name: name of the person
 * @f: pointer to a function that takes a char * and returns void
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}


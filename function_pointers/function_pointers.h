#ifndef FUNCTION_POINTER_H
#define FUNCTION_POINTER_H

#include <stddef.h>

int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif


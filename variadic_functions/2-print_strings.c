#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings with a separator
 * @separator: string between strings
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		printf("%s", str ? str : "(nil)");

		if (separator && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(args);
}


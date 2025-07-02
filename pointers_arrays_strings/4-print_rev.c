#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: pointer to the string to be reversed
 */
void print_rev(char *s)
{
	int len = 0;

	/* First, find the length of the string */
	while (s[len] != '\0')
	{
		len++;
	}

	/* Print characters in reverse */
	while (len > 0)
	{
		len--;
		_putchar(s[len]);
	}

	_putchar('\n');
}

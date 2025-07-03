#include "main.h"

/**
 * puts_half - Prints the second half of a string.
 * @str: The string to print.
 */
void puts_half(char *str)
{
	int i = 0;
	int n;

	while (str[i] != '\0')
		i++;

	n = (i % 2 == 0) ? (i / 2) : ((i + 1) / 2);

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}

	_putchar('\n');
}

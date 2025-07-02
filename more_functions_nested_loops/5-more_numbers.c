#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 * followed by a new line
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++) /* Repeat 10 times */
	{
		for (j = 0; j <= 14; j++) /* Print numbers 0 to 14 */
		{
			if (j >= 10)
				_putchar('1'); /* Print tens digit */
			_putchar((j % 10) + '0'); /* Print ones digit */
		}
		_putchar('\n');
	}
}

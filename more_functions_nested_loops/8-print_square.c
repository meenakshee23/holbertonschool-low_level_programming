#include "main.h"

/**
 * print_square - prints a square of '#' characters
 * @size: size of the square
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++) /* Rows */
		{
			for (j = 0; j < size; j++) /* Columns */
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

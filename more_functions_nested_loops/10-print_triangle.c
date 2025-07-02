#include "main.h"

/**
 * print_triangle - prints a triangle using '#' characters
 * @size: size (height and base width) of the triangle
 */
void print_triangle(int size)
{
	int row, space, hash;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			/* Print spaces */
			for (space = size - row; space > 0; space--)
			{
				_putchar(' ');
			}

			/* Print '#' characters */
			for (hash = 0; hash < row; hash++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}

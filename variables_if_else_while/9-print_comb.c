#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + 48); /* Print digit */

		if (i != 9)
		{
			putchar(',');  /* Print comma */
			putchar(' ');  /* Print space */
		}
	}
	putchar('\n');  /* New line at the end */
	return (0);
}


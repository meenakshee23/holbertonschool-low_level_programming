#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10 times
 */
void print_alphabet_x10(void)
{
	int line = 0;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz\n";

	while (line < 10)
	{
		int i = 0;

		while (alphabet[i] != '\0')
		{
			_putchar(alphabet[i]);
			i++;
		}
		line++;
	}
}

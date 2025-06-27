#include "main.h"
/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Return: void
 */
void print_alphabet(void)
{
    char alphabet[27];
    int i;

    for (i = 0; i < 26; i++)
    {
        alphabet[i] = 'a' + i;
    }
    alphabet[26] = '\n';

    for (i = 0; i < 27; i++)
    {
        _putchar(alphabet[i]);
    }
}

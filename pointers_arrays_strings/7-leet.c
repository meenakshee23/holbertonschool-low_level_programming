#include "main.h"
/**
 * leet - Encodes a string into 1337
 * Letters a/A -> 4, e/E -> 3, o/O -> 0, t/T -> 7, l/L -> 1
 * @str: The string to encode
 *
 * Return: The encoded string
 */
char *leet(char *str)
{
	char *letters = "aAeEoOtTlL";
	char *nums =    "4433007711";
	int i, j;

	for (i = 0; str[i]; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = nums[j];
				break;
			}
		}
	}
	return (str);
}

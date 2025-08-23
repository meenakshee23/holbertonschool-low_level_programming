#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the integer value found in the string oe 0 if none
 */
int _atoi(char *s)
{
	int i = 0, sign = 1;
	unsigned int num = 0;

	while (s[i])
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			while (s[i] >= '0' && s[i] <= '9')
			{
				num = num * 10 + (s[i] - '0');
				i++;
			}
			break;
		}
		i++;
	}

	if (sign == -1)
		return (-num);
	return (num);
}

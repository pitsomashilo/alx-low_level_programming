#include "main.h"

/**
 * puts_half - prints the second half of a string, followed by a new line
 * @str: a string
 */
void puts_half(char *str)
{
	int n;
	int len;

	len = _strlen(str);
	if (len % 2 == 0)
	{
		for (n = len / 2; n <= len; n++)
		{
			if (str[n] == '\0')
			{
				_putchar('\n');
				break;
			}
			else
			{
				_putchar(str[n]);
			}

		}
	}
	else
	{
		for (n = (len - 1) / 2; n <= len; n++)
		{
			if (str[n] == '\0')
			{
				_putchar('\n');
				break;
			}
			else
			{
				_putchar(str[n]);
			}

		}
	}
}
/**
 * _strlen - returns the length of a string
 * @s: a string
 * Return: len
 */
int _strlen(char *s)
{
	int len;
	int i;

	i = 0;
	len = 0;

	while (s[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

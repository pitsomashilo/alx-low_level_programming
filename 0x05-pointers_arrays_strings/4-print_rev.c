#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: a string
 */
void print_rev(char *s);
int _strlen(char *s);

void print_rev(char *s)
{
	int len;
	int a;

	len = _strlen(s);

	for (a = len; a > -1; a--)
	{
		if (len == 0)
		{
			_putchar('\n');
			_putchar('\n');
			break;
		}
		else
		{
			_putchar(s[a]);
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

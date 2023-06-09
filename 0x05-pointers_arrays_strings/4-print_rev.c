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
		if (s[a] == '\0')
		{
			continue;
		}
		else
		{
			_putchar(s[a]);
		}
	}
	_putchar('\n');
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

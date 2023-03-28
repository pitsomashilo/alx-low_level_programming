#include "main.h"

/**
 * puts2 - prints every other character of a string, followed by a new line
 * @str: a string
 */
void puts2(char *str);
int _strlen(char *s);

void puts2(char *str)
{
	int i;
	int len;

	len = _strlen(str);
	for (i = 0; i <= len; i += 2)
	{

		if (str[i] == '\0')
		{
			break;
		}
		else
		{
			_putchar(str[i]);
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

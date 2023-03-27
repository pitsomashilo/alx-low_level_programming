#include "main.h"

/**
 * _puts - prints a string, followed by a new line to stdout
 * @str: a string
 */
void _puts(char *str)
{
	int i;

	for (i = 0;; i++)
	{
		if (str[i] == '\0')
		{
			_putchar('\n');
			break;
		}
		else
		{
			_putchar(str[i]);
		}
	}
}

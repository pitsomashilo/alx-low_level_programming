#include "main.h"

/**
 * puts2 - prints every other character of a string, followed by a new line
 * @str: a string
 */
void puts2(char *str)
{
	int i;

	for (i = 0;; i += 2)
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

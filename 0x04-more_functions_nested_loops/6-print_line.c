#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: integer
 */
void print_line(int n)
{
	int i = 0;
	char line = '_';

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < n)
		{
			_putchar(line);
			i++;

		}
		_putchar('\n');
	}
}

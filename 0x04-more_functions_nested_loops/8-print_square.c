#include "main.h"

/**
 * print_square - draws a sqaure on the terminal
 * @n: integer
 */
void print_square(int n)
{
	int i;
	int j = 0;
	char hash = '#';

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (j < n)
		{
			i = 0;
			while (i < n)
			{
				_putchar(hash);
				i++;
			}
		_putchar('\n');
		j++;
		}
	}
}

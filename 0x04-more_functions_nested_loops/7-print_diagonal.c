#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n: integer
 */
void print_diagonal(int n)
{
	int i = 0;
	int j;
	int k;
	char space = ' ';
	char slash = '\\';

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < n)
		{
			j = i;
			for (k = 0; k <= j; k++)
			{
				if (k == j)
				{
					_putchar(slash);
					break;
				}
				else
				{
					_putchar(space);
				}
			}
			_putchar('\n');
			i++;
		}
	}
}

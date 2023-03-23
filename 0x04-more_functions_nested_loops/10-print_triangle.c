#include "main.h"

/**
 * print_triangle - draws a diagonal line in the terminal
 * @n: integer
 */
void print_triangle(int n);
void hash(int i);

void print_triangle(int n)
{
	int i = 0;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
	while (i < n)
	{
		j = n;
		for (; i < j; j--)
		{
			if (i == (j - 1))
			{
				hash(i);
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
		i++;
	}

	}
}

/**
 * hash - prints hashes to create triangle
 * @i: integer
 */
void hash(int i)
{
	int k = 0;

	while (k <= i)
	{
		if (k == i)
		{
			_putchar('#');
			break;
		}
		else
		{
			_putchar('#');
			k++;
		}
	}
}

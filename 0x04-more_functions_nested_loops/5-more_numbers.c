#include "main.h"

/**
 * more_numbers - prints the numbers from 0 to 14 ten times.
 *
 * Return: void
 */
void more_numbers(void)
{

	int a = 0;
	int i;

	while (a < 10)
	{
		i = 0;
		while (i < 15)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
				i++;
			}
			else
			{
				_putchar(i + '0');
				i++;
			}
		}
		_putchar('\n');
		a++;

	}
}

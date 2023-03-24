#include "main.h"

/**
 * more_numbers - prints the numbers from 0 to 14 ten times.
 *
 * Return: void
 *
 */
void more_numbers(void)
{
	int i;
	int j;
	int tens;
	int ones;

	j = 0;
	while (j < 10)
	{
		for (i = 0; i < 15; i++)
		{
			ones = (i % 10) + '0';
			if (i > 9)
			{
				tens = (i / 10) + '0';
			}
				if (i < 10)
				goto next;
				_putchar(tens);
next:
				_putchar(ones);
		}
	_putchar('\n');
	j++;
	}
}

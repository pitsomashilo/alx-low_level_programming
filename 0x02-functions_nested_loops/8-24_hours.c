#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return: void.
 */
void jack_bauer(void)
{
	int min_ones;
	int newline = 10;
	int min_tens;
	int colon = 58;
	int hour_ones = 48;
	int hour_tens = 49;

	while (hour_tens < 51)
	{
		if (hour_ones == 58)
		{
			hour_ones = 48;
			while (hour_ones < 52)
			{
				min_tens = 48;
				while (min_tens < 54)
				{
					min_ones = 48;
					while (min_ones < 58)
					{
						_putchar(hour_tens);
						_putchar(hour_ones);
						_putchar(colon);
						_putchar(min_tens);
						_putchar(min_ones);
						_putchar(newline);
						min_ones++;
					}
					min_tens++;
				}
				hour_ones++;
			}
			hour_tens++;
		}
		else if (hour_ones < 58)
		{
			while (hour_ones < 58)
			{
				min_tens = 48;
				while (min_tens < 54)
				{
					min_ones = 48;
					while (min_ones < 58)
					{
						_putchar(hour_ones);
						_putchar(colon);
						_putchar(min_tens);
						_putchar(min_ones);
						_putchar(newline);
						min_ones++;
					}
					min_tens++;
				}
				hour_ones++;
			}
		}
	}
}

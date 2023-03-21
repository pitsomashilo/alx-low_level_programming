#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 */
void jack_bauer(void);
void ten_hours(void);
void twenty_hours(void);

int min_ones = 48;
int newline = 10;
int min_tens = 48;
int colon = 58;
int zero = 48;
int hour_ones = 48;
int hour_tens = 49;

void jack_bauer(void)
{
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
						twenty_hours();
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
						ten_hours();
					}
					min_tens++;
				}
				hour_ones++;
			}
		}
	}
}
/**
 * ten_hours - prints from midnight until 9:59
 */
void ten_hours(void)
{
	_putchar(zero);
	_putchar(hour_ones);
	_putchar(colon);
	_putchar(min_tens);
	_putchar(min_ones);
	_putchar(newline);
	min_ones++;
}
/**
 * twenty_hours - prints from 10 until 23:59
 */
void twenty_hours(void)
{
	_putchar(hour_tens);
	_putchar(hour_ones);
	_putchar(colon);
	_putchar(min_tens);
	_putchar(min_ones);
	_putchar(newline);
	min_ones++;
}




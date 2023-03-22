#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 */
void jack_bauer(void);
void hours(int, int, int, int, int, int);

void jack_bauer(void)
{
	int min_ones = 48;
	int newline = 10;
	int min_tens = 48;
	int colon = 58;
	int zero = 48;
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
						hours(hour_tens, hour_ones, colon, min_tens, min_ones, newline);
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
						hours(zero, hour_ones, colon, min_tens, min_ones, newline);
						min_ones++;
					}
					min_tens++;
				}
				hour_ones++;
			}
		}
	}
}
/**
 * hours - prints every minute from midnight until 23:59
 *
 * @x: character
 * @y: character
 * @z: character
 * @a: character
 * @b: character
 * @c: character
 */
void hours(int x, int y, int z, int a, int b, int c)
{
	_putchar(x);
	_putchar(y);
	_putchar(z);
	_putchar(a);
	_putchar(b);
	_putchar(c);
}

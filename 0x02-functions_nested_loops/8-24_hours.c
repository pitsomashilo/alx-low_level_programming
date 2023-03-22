#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 */
void jack_bauer(void);
void hours(char, char, char, char, char, char);

void jack_bauer(void)
{
	int min_ones = 0;
	int newline = '\n';
	int min_tens = 0;
	char colon = ':';
	int zero = 0;
	int hour_ones = 0;
	int hour_tens = 1;


	while (hour_tens < 3)
	{
		if (hour_ones == 10)
		{
			hour_ones = 0;
			while (hour_ones < 4)
			{
				min_tens = 0;
				while (min_tens < 6)
				{
					min_ones = 0;
					while (min_ones < 10)
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
		else if (hour_ones <= 9)
		{
			while (hour_ones <= 9)
			{
				min_tens = 0;
				while (min_tens < 6)
				{
					min_ones = 0;
					while (min_ones < 10)
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
void hours(char x, char y, char z, char a, char b, char c)
{
	_putchar(x + '0');
	_putchar(y + '0');
	_putchar(z);
	_putchar(a + '0');
	_putchar(b + '0');
	_putchar(c);
}

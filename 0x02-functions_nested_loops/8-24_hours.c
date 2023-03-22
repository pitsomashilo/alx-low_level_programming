#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 */
void jack_bauer(void);
void hours(char, char, char, char);

void jack_bauer(void)
{
	int min_ones = 0;
	int newline = '\n';
	int min_tens = 0;
	char colon = ':';
	/*int zero = 0;*/
	/*int hour_ones = 0;*/
	/*int hour_tens = 1;*/

	while (min_tens < 24)
	{
		min_ones = 0;
		while (min_ones < 60)
		{
			hours(min_tens, colon, min_ones, newline);
			min_ones++;
		}
		min_tens++;
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
void hours(char a, char b, char c, char d)
{
	_putchar((a / 10) + '0');
	_putchar((a % 10) + '0');
	_putchar(b);
	_putchar((c / 10) + '0');
	_putchar((c % 10) + '0');
	_putchar(d);
}

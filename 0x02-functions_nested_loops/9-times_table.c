#include "main.h"

/**
 * times_table - prints the 9 times table starting with 0
 * @a: a character.
 * @b: a character.
 * @c: character.
 */
void _prints9(char a, char b, char c);
void prints_other(char w, char x, char y, char z);

void times_table(void)
{
	int a;
	int b = 0;
	int result;

	while (b <= 9)
	{
		if (b == 0)
		{
			a = 0;
			while (a <= 9)
			{
				if (a == 9)
				{
					_prints9(' ', '0', '\n');
					break;
				}
				else
				{
					prints_other(' ', '0', ',', ' ');
					a++;
				}
			}
		}
		else if (b == 1)
		{
			a = 0;
			while (a <= 9)
			{
				result = a * b;
				if (a == 9)
				{
					_prints9(' ', result + '0', '\n');
					break;
				}
				else
				{
					prints_other(' ', result + '0', ',', ' ');
					a++;
				}
			}
		}
		else
		{
			a = 0;
			while (a <= 9)
			{
				if (a == 9)
				{
					result = a * b;
					_prints9((result / 10) + '0', (result % 10) + '0', '\n');
					break;
				}
				else
				{
					result = a * b;
					if ((result / 10) + '0' == '0')
					{
						prints_other(' ', (result % 10) + '0', ',', ' ');
						a++;
					}
					else
					{
						prints_other((result / 10) + '0', (result % 10) + '0', ',', ' ');
						a++;
					}
				}
			}
		}
		b++;
	}
}
/**
 * _prints9 - prints 3 characters to stdout
 * @a: a character.
 * @b: a character.
 * @c: character.
 */
void _prints9(char a, char b, char c)
{
	_putchar(a);
	_putchar(b);
	_putchar(c);
}

/**
 * prints_other - prints 4 characters to stdout
 * @w: character.
 * @x: character.
 * @y: character.
 * @z: character.
 */
void prints_other(char w, char x, char y, char z)
{
	_putchar(w);
	_putchar(x);
	_putchar(y);
	_putchar(z);
}

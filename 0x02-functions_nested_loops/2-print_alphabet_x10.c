#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet in lowercase ten times.
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char a = 97;
	char newline = 10;
	char i = 0;

	while (i < 10)
	{
		a = 97;
		while (a < 123)
		{
			_putchar(a);
			a++;
		}
		_putchar(newline);
		i++;
	}
}

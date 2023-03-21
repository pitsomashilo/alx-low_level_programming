#include "main.h"
/**
 * print_alphabet - prints the lowercase alphabet.
 *
 * Return: void
 */
void print_alphabet(void)
{
	char a = 97;
	char newline = 10;

	while (a < 123)
	{
		_putchar(a);
		a++;
	}
	_putchar(newline);
}

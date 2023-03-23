#include "main.h"
/**
 * print_numbers - prints numbers from 0 to 9 followed by newline.
 *
 * Return: void
 */
void print_numbers(void)
{
	int a = 0;

	while (a < 10)
	{
		_putchar(a + '0');
		a++;
	}
	_putchar('\n');
}

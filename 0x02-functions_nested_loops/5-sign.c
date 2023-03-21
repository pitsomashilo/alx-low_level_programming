#include "main.h"

/**
 * print_sign - prints the sign of a number.
 * @n: a signed integer.
 *
 * Return: 1 and prints + if n is greater than 0, 0 and prints 0 if n is 0,
 * 1 and prints - if n is less than 0.
 */
int print_sign(int n)
{
	int result;

	if (n < 0)
	{
		result = -1;
		_putchar('-');
	}
	else if (n == 0)
	{
		result = 0;
		_putchar('0');
	}
	else
	{
		result = 1;
		_putchar('+');
	}
	return (result);
}

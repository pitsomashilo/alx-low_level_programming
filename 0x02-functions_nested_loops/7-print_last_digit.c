#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @a: a number.
 *
 * Return: the last digit of a.
 */
int print_last_digit(int a)
{
	int mod = 10;
	int result;

	if (a < 0)
	{
		a = a % mod;
		result = a * -1;
		_putchar('0' + result);
	}
	else
	{
		result = a % mod;
		_putchar('0' + result);
	}
	return (result);
}

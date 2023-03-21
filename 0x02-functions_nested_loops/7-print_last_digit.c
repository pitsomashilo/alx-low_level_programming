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
		a = a * -1;
		result = a % mod;
	}
	else
	{
		result = a % mod;
	}
	return (result);
}

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: character that separates the numbers when printed
 * @n: number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list numbers;


	va_start(numbers, n);
	if (n == 0)
		exit(1);
	for (i = 0; i < n; i++)
	{
		num = va_arg(numbers, int);
		if (i == (n - 1) || n == 1)
		{
			printf("%d\n", num);
			break;
		}
		if (separator == NULL)
			printf("%d", num);
		else
			printf("%d%s", num, separator);
	}
}

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: character that separates the numbers when printed
 * @n: number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...);
int _strlen(const char *s);

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list numbers;


	va_start(numbers, n);
	if (n == 0)
	{
		printf("\n");
		exit(1);
	}
	for (i = 0; i < n; i++)
	{
		num = va_arg(numbers, int);
		if (i == (n - 1))
		{
			printf("%d\n", num);
			break;
		}
		if (separator == NULL || _strlen(separator) == 0)
			printf("%d", num);
		else
			printf("%d%s", num, separator);
	}
	va_end(numbers);
}
/**
 * _strlen - returns the length of a string
 * @s: a string
 * Return: len
 */
int _strlen(const char *s)
{
	int len;
	int i;

	i = 0;
	len = 0;

	while (s[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

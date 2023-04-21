#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by a new line
 * @separator: separates strings when printed
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...);
int _strlen(const char *s);

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i;
	int a;
	char *str;
	va_list strings;

	a = (int) n;
	va_start(strings, n);
	if (a <= 0)
	{
		printf("\n");
		exit(0);
	}
	for (i = 0; i < a; i++)
	{
		str = va_arg(strings, char *);
		if (str != NULL)
		{
			if (i == (a - 1))
			{
				printf("%s\n", str);
				break;
			}
			if (separator == NULL || _strlen(separator) == 0)
				printf("%s", str);
			else
				printf("%s%s", str, separator);
		}
		else
		{
			if (i == (a - 1))
			{
				printf("%p\n", str);
				break;
			}
			if (separator == NULL || _strlen(separator) == 0)
				printf("%p", str);
			else
				printf("%p%s", str, separator);
		}
	}
	va_end(strings);
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

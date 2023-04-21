#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: format to be printed
 */
void print_all(const char * const format, ...)
{
	int i, j, num_specs;
	double f;
	char *s, *sep;
	va_list args;
	char x;

	j = 0;
	num_specs = 0;
	sep = ", ";
	while (format[j] != '\0')
	{
		num_specs++;
		j++;
	}
	if (num_specs == 0 || format == NULL)
	{
		printf("\n");
		exit(0);
	}
	j = 0;
	va_start(args, format);
	while (j < num_specs)
	{
		x = format[j];
		if (j == (num_specs - 1))
		{
			switch (x)
			{
				case 'c':
					printf("%c\n", va_arg(args, int));
					break;
				case 'i':
					i = va_arg(args, int);
					printf("%d\n", i);
					break;
				case 'f':
					f = va_arg(args, double);
					printf("%f\n", f);
					break;
				case 's':
					s = va_arg(args, char *);
					if (s == NULL)
						printf("%p\n", s);
					printf("%s\n", s);
					break;
			}
			break;
		}
		switch (x)
		{
			case 'c':
				printf("%c%s", va_arg(args, int), sep);
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d%s", i, sep);
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%f%s", f, sep);
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					printf("%p%s", s, sep);
				printf("%s%s", s, sep);
				break;
		}
		j++;
	}
}

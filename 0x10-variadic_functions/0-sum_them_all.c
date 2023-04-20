#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: unsigned int
 *
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i; /* counter variable */
	int result; /* will sore the sum of all numbers */
	va_list numbers; /* pointer to list of variable arguments */

	va_start(numbers, n); /* Enabling access to variable arguments */
	result = 0;
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		result += va_arg(numbers, int);
	va_end(numbers);
	return (result);
}

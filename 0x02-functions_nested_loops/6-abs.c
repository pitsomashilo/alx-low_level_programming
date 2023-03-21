#include "main.h"

/**
 * _abs - checks the absolute value of an integer.
 * @a: an integer.
 *
 * Return: The absolute value of a.
 */
int _abs(int a)
{
	int result;

	if (a < 0)
	{
		result = a * -1;
	}
	else
	{
		result = a;
	}
	return (result);
}

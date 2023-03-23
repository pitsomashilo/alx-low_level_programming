#include "main.h"

/**
 * _isdigit - checks whether a character is a digit or not.
 * @c: an integer.
 *
 * Return: 1 if character is a digit, 0 othwewise.
 */
int _isdigit(int c)
{
	int result;

	if (c > 47 && c < 58)
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	return (result);
}


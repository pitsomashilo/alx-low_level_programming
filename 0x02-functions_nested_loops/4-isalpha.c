#include "main.h"

/**
 * _isalpha - checks whether a character is part of the alphabet or not.
 * @c: an integer.
 *
 * Return: 1 if lowercase or uppercase letter, 0 othwewise.
 */
int _isalpha(int c)
{
	int result;

	if (c > 64 && c < 91)
	{
		result = 1;
	}
	else if (c > 96 && c < 123)
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	return (result);
}


 #include "main.h"

/**
 * _islower - checks whether the alphabet is lowercase.
 * @c: an integer.
 *
 * The function takes a paramter of c then checks whether the parameter
 * is lowercase or uppercase, and returns a specified value for both
 * cases.
 * Return: 1 if lowercase, 0 otherwise.
 */
int _islower(int c)
{
	int result;

	if (c > 96 && c < 123)
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	return (result);
}


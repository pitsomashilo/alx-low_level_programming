 #include "main.h"

/**
 * _isupper - checks whether the alphabet is uppercase.
 * @c: an integer.
 *
 * The function takes a paramter of c then checks whether the parameter
 * is upperrcase or lowercase, and returns a specified value for both
 * cases.
 * Return: 1 if uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	int result;

	if (c > 64 && c < 91)
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	return (result);
}


#include "main.h"

/**
 * _pow_recursion - returns the value of x to the power of y
 * @x: integer
 * @y: integer
 *
 * Return: integer - x to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (x == 1)
	{
		return (1);
	}
	if (y == 0)
	{
		return (1);
	}
	y--;
	return (x * (_pow_recursion(x, y)));
}

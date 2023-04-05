#include "main.h"

/**
 * _strlen_recursion - determines length of string
 * @s: a string
 *
 * Return: integer (length of string)
 */
int _strlen_recursion(char *s);
int count(char *s, int n);

int _strlen_recursion(char *s)
{
	int i;
	int r;

	i = 1;
	if (s[i] == '\0')
	{
		return (1);
	}
	r = count(s, i);
	return (r);
}
/**
 * count - prints string recursively followed by a new line
 * @s: string
 * @n: integer
 *
 * Return: integer
 */
int count(char *s, int n)
{
	n += 1;
	if (s[n] == '\0')
	{
		return (n);
	}
	return (count(s, n));
}

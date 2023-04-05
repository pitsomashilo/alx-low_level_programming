#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse followed by a new line
 * @s: a string
 */
void _print_rev_recursion(char *s);
int count(char *s, int n);
void recurse_with_num(char *s, int n);

void _print_rev_recursion(char *s)
{
	int i;
	int r;

	i = 0;
	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}
	r = count(s, i);
	recurse_with_num(s, r);
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
/**
 * recurse_with_num - prints string in reverse recursively followed by new line
 * @s: string
 * @n: integer
 */
void recurse_with_num(char *s, int n)
{

	_putchar(s[n]);
	n--;
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	recurse_with_num(s, n);
}

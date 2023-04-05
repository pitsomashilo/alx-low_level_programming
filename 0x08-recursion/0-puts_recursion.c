#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: a string
 */
void puts_recursion(char *s);
void recurse_with_num(char *s, int n);

void _puts_recursion(char *s)
{
	int i;

	i = 0;
	recurse_with_num(s, i);
}
/**
 * recurse_with_num - prints string recursively followed by a new line
 * @s: string
 * @n: integer
 */
void recurse_with_num(char *s, int n)
{

	_putchar(s[n]);
	n++;
	if (s[n] == '\0' || s == "")
	{
		_putchar('\n');
		return;
	}
	recurse_with_num(s, n);
}

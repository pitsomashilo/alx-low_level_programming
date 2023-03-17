#include <stdio.h>

/**
 * main - prints single digit base 10 numbers using putchar.
 * Return: 0
 */
int main(void)
{
	char a = 48;
	char space = '\n';

	while (a < 58)
	{
		putchar(a);
		a++;
	}
	putchar(space);
	return (0);
}

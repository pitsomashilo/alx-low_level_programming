#include <stdio.h>

/**
 * main - prints single digit base 10 numbers using putchar.
 * Return: 0
 */
int main(void)
{
	int a = 48;
	int space = 10;

	while (a < 58)
	{
		putchar(a);
		a++;
	}
	putchar(space);
	return (0);
}

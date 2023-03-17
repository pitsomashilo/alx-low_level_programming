#include <stdio.h>

/**
 * main - prints the alphabet in lowercase and uppercased followed by new line
 *
 * Return: 0
 */
int main(void)
{
	char a = 97;
	char A = 65;
	char space = '\n';

	while (a < 123)
	{
		putchar(a++);
	}
	while (A < 91)
	{
		putchar(A++);
	}
	putchar(space);
	return (0);
}

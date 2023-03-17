#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * Return: 0
 */
int main(void)
{
	char a = 97;
	char space = '\n';

	while (a < 123)
	{
		putchar(a++);
	}
	putchar(space);
	return (0);
}

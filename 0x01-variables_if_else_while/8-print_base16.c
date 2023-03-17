#include <stdio.h>

/**
 * main - prints base16 numbers in lowercase
 * Return: 0
 */
int main(void)
{
	char num = 48;
	char alph = 97;
	char space = '\n';

	while (num < 58)
	{
		putchar(num);
		num++;
	}

	while (alph < 103)
	{
		putchar(alph);
		alph++;
	}
	putchar(space);
	return (0);
}

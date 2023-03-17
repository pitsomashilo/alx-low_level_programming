#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 * Return: 0
 */
int main(void)
{
	char z = 122;
	char space = '\n';

	while (z > 96)
	{
		putchar(z);
		z--;
	}
	putchar(space);
	return (0);
}
